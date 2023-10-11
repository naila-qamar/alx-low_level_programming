#include "main.h"

/**
 * _isalpha - Checks for an alphabetic character.
 * @c: The character to check.
 *
 * Return: 1 if c is a letter (uppercase or lowercase), 0 otherwise.
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
