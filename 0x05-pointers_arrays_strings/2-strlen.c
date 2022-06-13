#include "main.h"

/**
 * _strlen - Prints the length of a string
 * @s: a pointer that points to a string
 *
 * Return: void
 */

int _strlen(char *s)
{
	int i;
	char c;

	i = 0;
	while (c != '\0')
	{
		c = *(s + i);
		i++;
	}

	return (i - 1);
}
