#include "main.h"

/**
 * _strlen_recursion - prints the lenght of a string recursively
 * @s: pointer to string
 *
 * Return: an integer
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
