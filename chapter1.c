#include <stdio.h>

// Symbolic name or constants
// Essentially will replace the variable with the values here.
#define LOWER 0

void strFormats()
{
    // Double quotes: character string or string constant.
    printf("hello world\n");

    // Number formatting
    // 6d will pad the int to the right with empty chars.
    int i1 = 1;
    printf("%%d: %d\n", i1);
    printf("%%6d: %6d\n", i1);

    // 6f will just add more decimal numbers. still left aligned.
    float f1 = 1.2;
    float f2 = 123.456;
    printf("%%6f: %6f\n", f1);
    printf("%%6f: %6f\n", f2);

    // String formatting
    char s1[] = "Hello";
    printf("%%s: %s\n", s1);

    // Hex formatting
    int h1 = 0xFAFA;
    printf("%%X: %X\n", h1);

    printf("LOWER: %d", LOWER);
}

void forLoops()
{
    for (int i = 0; i < 5; i++)
    {
        printf("now at i: %d\n", i);
    }
}

void inputOutput()
{
    // Though the name is getchar, you can input as long as you want, ending with Enter.
    char c = getchar();
    putchar(c);
    printf("%%c: %c\n", c);
    printf("EOF is %d\n", EOF);

    // You can put function in expression.
    while ((c = getchar()) != EOF)
        putchar(c);
}

void charCount()
{
    long nc;

    nc = 0;
    while (getchar() != EOF)
        ++nc;
    printf("%ld\n", nc);
}

int main()
{
    //   strFormats();
    //   forLoops();
    //   inputOutput();
    charCount();
    return 0;
}
