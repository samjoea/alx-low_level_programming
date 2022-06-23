#include "main.h"

/**
 * len_rec - recursively finds the length of a string
 * @c: pointer to the string
 *
 * Return: an integer value
 */

int len_rec(char *c)
{
	if (*c == '\0')
		return (0);
	return (1 + len_rec(c + 1));
}

/**
 * check - reverse a string
 * @str: pointer to the string
 * @rev: pointer to the reverse of the string
 *
 * Return: pointer to reversed string
 */

int check(char *str, char *rev)
{
	if (str >= rev)
		return (1);
	if (*str == *rev)
		return (check(str + 1, rev - 1));
	return (0);
}

/**
 * is_palindrome - checks if a string is the same in reverse
 * @s: pointer to the string
 *
 * Return: 1 if the string is a palindrom or 0 is not
 */

int is_palindrome(char *s)
{
	int len;

	len = len_rec(s);
	if (*s == '\0')
		return (1);
	return (check(s, (s + (len - 1))));
}
