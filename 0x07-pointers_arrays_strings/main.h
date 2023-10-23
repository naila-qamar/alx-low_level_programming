#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - Writes a character to the standard output (stdout)
 * @c: The character to write
 *
 * Return: On success 1. On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * _strchr - Locates a character in a string.
 * @s: The string to search.
 * @c: The character to find.
 *
 * Return: A pointer to the first occurrence of the character c in s, or NULL
 *         if the character is not found.
 */
char *_strchr(char *s, char c);

/**
 * _memset - Fills the first n bytes of the memory area pointed to by s with
 *          the constant byte b
 * @s: Pointer to the memory area
 * @b: The constant byte
 * @n: Number of bytes to fill
 *
 * Return: A pointer to the filled memory area s
 */
char *_memset(char *s, char b, unsigned int n);

/**
 * _memcpy - Copies n bytes from memory area src to memory area dest
 * @dest: The destination memory area
 * @src: The source memory area
 * @n: Number of bytes to copy
 *
 * Return: A pointer to the destination memory area (dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be searched
 * @accept: The string containing the characters to match
 *
 * Return: The number of bytes in the initial segment of s which consist only
 *         of bytes from accept
 */
unsigned int _strspn(char *s, char *accept);

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to be searched
 * @accept: The string containing the characters to match
 *
 * Return: A pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept);

/**
 * _strstr - Locates a substring.
 * @haystack: The string to search
 * @needle: The substring to find
 *
 * Return: A pointer to the beginning of the located substring, or NULL if the
 *         substring is not found.
 */
char *_strstr(char *haystack, char *needle);

/**
 * print_chessboard - Prints the chessboard.
 * @a: The chessboard to be printed
 */
void print_chessboard(char (*a)[8]);

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix of
 *                  integers.
 * @a: The square matrix
 * @size: The size of the matrix
 */
void print_diagsums(int *a, int size);

#endif /* MAIN_H */
