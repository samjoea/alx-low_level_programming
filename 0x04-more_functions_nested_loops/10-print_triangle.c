#include "main.h"

/**
 * print_triangle - draws a triangle.
 * @size: integer value, size of the triangle.
 *
 * Return: void.
 */

void print_triangle(int size)
{
	int i, j, n, a;

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
			for (j = n; j > i + 1; j--)
			{
				_putchar(' ');
			}

			for (a = 0; a <= i; a++)
			{
				_putchar('#');
			}

			_putchar('\n');
			i++;
		}
	}
}
