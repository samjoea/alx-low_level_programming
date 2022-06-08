#include "main.h"

/**
 * times_table - prints 9 times table starting with 0.
 *
 * Return: void.
 */

void times_table(void)
{
	int i, j;
	int a;

	i = 0;
	while (i < 10)
	{
		for (j = 0; j < 10; j++)
		{
			a = i * j;

			if (a > 9)
			{
				_putchar((a / 10) + '0');
				_putchar((a % 10) + '0');
			}

			else if (j != 0)
			{
				_putchar(' ');
				_putchar(a + '0');
			}

			else
			{
				_putchar(a + '0');
			}

			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}

		_putchar('\n');

		i++;
	}
}
