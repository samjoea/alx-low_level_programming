#include "main.h"

/**
 * _puts - Prints a string
 * @str: a pointer that points to a string
 *
 * Return: void
 */

void _puts(char *str)
{
	int i;
	char c;

	i = 0;
	while (c != '\0')
	{
		c = *(str + i);
		i++;

		_putchar(c);
	}

	_putchar('\n');
}
