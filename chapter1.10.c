#include <stdio.h>
#define MAXLINE 1000

// Illustrating external variables.
int max;
char line[MAXLINE];
char longest[MAXLINE];

// Be careful that 'getline' will conflict with getline in stdio.h and stop compilation.
int Getline(void);
void copy(void);

int main()
{
    int len, max;
    // Actually here, the 'extern' can be omitted as long as the definition of variables
    // is before its usage, which is true here.
    extern char line[];
    extern char longest[];

    max = 0;
    while ((len = Getline()) > 0)
        if (len > max)
        {
            max = len;
            copy();
        }
    if (max > 0)
    {
        printf("%s", longest);
    }
}

// We modify line in-place and return the length of the line.
int Getline(void)
{
    extern char line[];
    int c, i;

    for (i = 0; i < MAXLINE - 1 && ((c = getchar()) != EOF) && c != '\n'; ++i)
        line[i] = c;
    if (c == '\n')
    {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}

void copy()
{
    int i;
    extern char line[], longest[];

    i = 0;
    while ((longest[i] = line[i]) != '\0')
        ++i;
}