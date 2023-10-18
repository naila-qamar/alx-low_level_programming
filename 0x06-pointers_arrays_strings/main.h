#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - Writes a character to stdout
 * @c: The character to print
 *
 * Return: On success 1, otherwise -1
 */
int _putchar(char c);

/**
 * _strcat - Concatenates two strings
 * @dest: Destination string
 * @src: Source string
 *
 * Return: A pointer to the resulting string @dest
 */
char *_strcat(char *dest, char *src);

/**
 * _strncat - Concatenates n bytes of two strings
 * @dest: Destination string
 * @src: Source string
 * @n: Number of bytes to concatenate
 *
 * Return: A pointer to the resulting string @dest
 */
char *_strncat(char *dest, char *src, int n);

/**
 * _strncpy - Copies a string
 * @dest: Destination string
 * @src: Source string
 * @n: Number of bytes to copy
 *
 * Return: A pointer to the resulting string @dest
 */
char *_strncpy(char *dest, char *src, int n);

/**
 * _strcmp - Compares two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: 0 if @s1 matches @s2, < 0 if @s1 < @s2, > 0 if @s1 > @s2
 */
int _strcmp(char *s1, char *s2);

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: Array of integers
 * @n: Number of elements in the array
 */
void reverse_array(int *a, int n);

/**
 * string_toupper - Converts all lowercase letters of a string to uppercase
 * @str: Input string
 *
 * Return: A pointer to the modified string @str
 */
char *string_toupper(char *str);

/**
 * cap_string - Capitalizes all words of a string
 * @str: Input string
 *
 * Return: A pointer to the modified string @str
 */
char *cap_string(char *str);

/**
 * leet - Encodes a string into 1337
 * @str: Input string
 *
 * Return: A pointer to the modified string @str
 */
char *leet(char *str);

#endif /* MAIN_H */
