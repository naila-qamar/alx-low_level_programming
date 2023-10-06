#include <stdio.h>

int main(void)
{
    char letter;

    /* Loop through the alphabet */
    for (letter = 'a'; letter <= 'z'; letter++)
    {
        /* Check for letters 'e' and 'q' */
        if (letter != 'e' && letter != 'q')
        {
            /* Print the letter */
            putchar(letter);
        }
    }
    /* Print a newline */
    putchar('\n');

    return (0);
}

