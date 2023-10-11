#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char str[] = "_putchar\n";
    int i;

    for (i = 0; str[i] != '\0'; i++)
        write(1, &str[i], 1);

    return (0);
}
<<<<<<< HEAD
#include "main.h"

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    _putchar('_');
    _putchar('p');
    _putchar('u');
    _putchar('t');
    _putchar('c');
    _putchar('h');
    _putchar('a');
    _putchar('r');
    _putchar('\n');

    return (0);
}

=======
>>>>>>> 5a94951bcd39ef2a3dca2ceaf2961e7d8b6f982e
