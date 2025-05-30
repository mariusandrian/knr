#include <stdio.h>

/* If we declare a char[] without initializing, will throw compiler error.
 * char hello[];
 * printf("%s", hello); <--- will die.
 *
 * Static vars with array type need to be initialized.
 * static char ch[] <-- will fail to compile.
 *
 * Static integral vars will default to 0. See someNumber.
*/
int main() {
    static char someNumber;
    printf("someNumber is %d\n", someNumber);

    char hello[] = "a";
    printf("hello is %s\n", hello);
}
