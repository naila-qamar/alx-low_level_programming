#include <stdio.h>

int main(void)
{
    int number;

    /* Loop through numbers 0 - 9 and letters a - f */
    for (number = 48; number <= 102; number++)
    {
        /* Only print numbers 0-9 and a-f */
        if ((number <= 57) || (number >= 97))
        {
            /* Print the character */
            putchar(number);
        }
    }
    /* Print a new line */
    putchar('\n');

    return (0);
}

