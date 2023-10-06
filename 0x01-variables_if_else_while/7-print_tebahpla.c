#include <stdio.h>

int main(void)
{
    char letter;

    /* Loop from 'z' to 'a' */
    for (letter = 'z'; letter >= 'a'; letter--)
    {
        /* Print the letter */
        putchar(letter);
    }
    /* Print a new line */
    putchar('\n');

    return (0);
}

