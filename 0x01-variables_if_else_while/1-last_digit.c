#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - print the last digit of a number and tell whether
 * it is >5, 0, or <6 and not 0.
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;
    int lastDigit;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    lastDigit = n % 10;

    printf("Last digit of %d is %d and is ", n, lastDigit);

    if (lastDigit > 5)
        printf("greater than 5\n");
    else if (lastDigit == 0)
        printf("0\n");
    else
        printf("less than 6 and not 0\n");

    return (0);
}
