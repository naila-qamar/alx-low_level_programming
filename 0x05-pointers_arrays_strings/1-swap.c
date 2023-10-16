#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: first integer value.
 * @b: second integer value.
 *
 * Return: nothing.
 */
void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}
