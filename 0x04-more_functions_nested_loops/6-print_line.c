#include "main.h"

/**
 * print_line - draws a straight line.
 * @n: integer value.
 *
 * Return: void.
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		i = 0;
		while (i < n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
}
