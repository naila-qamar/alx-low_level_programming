#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - Writes a character to the standard output.
 * @c: The character to print.
 *
 * Return: On success 1, on error -1.
 */
int _putchar(char c);

/**
 * _strlen - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen(char *s);

/**
 * _strcpy - Copies a string to a destination.
 * @dest: The destination buffer.
 * @src: The source string.
 *
 * Return: A pointer to the destination string.
 */
char *_strcpy(char *dest, char *src);

/**
 * _strcmp - Compares two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: An integer less than, equal to, or greater than zero if s1 is found,
 *         respectively, to be less than, to match, or be greater than s2.
 */
int _strcmp(char *s1, char *s2);

/**
 * _strchr - Locates a character in a string.
 * @s: The string to search.
 * @c: The character to find.
 *
 * Return: A pointer to the first occurrence of the character c in s, or NULL
 *         if the character is not found.
 */
char *_strchr(char *s, char c);

#endif /* MAIN_H */
