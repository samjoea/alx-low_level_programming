#include "main.h"

/**
 * print_diagonal - draws a diagonal line.
 * @n: integer value.
 *
 * Return: void.
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		i = 0;
		while (i < n)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');

			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
}
