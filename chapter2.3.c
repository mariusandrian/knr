#include <stdio.h>

/*
    Enum can only be char or numbers.
    Cannot be char[].
*/
enum modes
{
    ON = 1,
    OFFSET, // Automatically increment to 2.
    OFF
};

enum modesChar
{
    CHAR_ON = 'a', // 97
    CHAR_OFF       // Auto incr to 98.
};

int main()
{
    // Split string to multiple lines.
    char hi[] = "hello"
                "world";

    int i = 0;
    while (hi[i] != '\0')
        ++i;
    printf("hi is %s\n", hi);
    printf("i is %d\n", i);

    printf("OFF number id %d\n", OFF);
    printf("CHAR_OFF number id %d\n", CHAR_OFF);
}