#include <stdio.h>

/**
 * main - Entry point, prints the number of arguments passed into it
 * @argc: The number of command line arguments
 * @argv: Array containing the program command line arguments
 * Return: 0 - success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
