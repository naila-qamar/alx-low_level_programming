#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>

/* Function to print character */
int _putchar(char c);

/* Function to print string using recursion */
void _puts_recursion(char *s);

/* Function to print string in reverse using recursion */
void _print_rev_recursion(char *s);

/* Function to return the length of a string using recursion */
int _strlen_recursion(char *s);

/* Function to return the factorial of a given number */
int factorial(int n);

/* Function to return the value of x raised to the power of y */
int _pow_recursion(int x, int y);

/* Function to return the natural square root of a number */
int _sqrt_recursion(int n);

/* Function to check if n is a prime number */
int is_prime_number(int n);

/* Function to check if a string is a palindrome */
int is_palindrome(char *s);

/* Function to compare two strings */
int wildcmp(char *s1, char *s2);


#endif /* MAIN_H */
