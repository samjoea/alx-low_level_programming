#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: a pointer that points to a string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i, j;

	for (i = 0; (*(s + i)) != '\0';)
	{
		i++;
	}

	j = i - 1;
	while (j >= 0)
	{
		_putchar(*(s + j--));
	}

	_putchar('\n');
}
