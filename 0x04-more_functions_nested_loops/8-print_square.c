#include "main.h"

/**
 * print_square - draws a square.
 * @size: integer value, size of the square.
 *
 * Return: void.
 */

void print_square(int size)
{
	int i, j, n;

	n = size;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		i = 0;
		while (i < n)
		{
			for (j = 0; j < n; j++)
				_putchar('#');

			_putchar('\n');
			i++;
		}
	}
}
