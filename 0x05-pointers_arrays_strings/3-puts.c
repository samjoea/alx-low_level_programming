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

	for (i = 0; (*(str + i)) != '\0'; i++)
	{
		_putchar(*(str + i));
	}

	_putchar('\n');
}
