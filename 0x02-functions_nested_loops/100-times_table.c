#include "main.h"

/**
 * print_times_table - prints n times table starting with 0.
 * @n: the number of times table to print.
 *
 * Return: void.
 */

void print_times_table(int n)
{
	int i, j, a;

	if (n < 15 || n < 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				a = i * j;
				if (a > 99)
				{
					_putchar((a / 100) + '0');
					_putchar(((a / 10) % 10) + '0');
					_putchar((a % 10) + '0');
				}
				else if (a > 9)
				{
					_putchar(' ');
					_putchar(a / 10 + '0');
					_putchar(a % 10 + '0');
				}
				else if (j != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(a + '0');
				}
				else
					_putchar(a + '0');

				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
