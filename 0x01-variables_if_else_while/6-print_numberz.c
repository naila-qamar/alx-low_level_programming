#include <stdio.h>

int main(void)
{
    int number;

    /* Loop through ASCII values of 0 to 9 */
    for (number = 48; number <= 57; number++)
    {
        /* Print the number */
        putchar(number);
    }
    /* Print a new line */
    putchar('\n');

    return (0);
}

