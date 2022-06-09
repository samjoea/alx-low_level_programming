#include "main.h"

/**
 * more_numbers - Prints numbers from 0 - 14 10 times.
 *
 * Return: void.
 */

void more_numbers(void)
{
	int i, j, a;

	i = 0;
	while (i < 10)
	{
		for (j = 0; j < 15; j++)
		{
			a = j / 10;
			if (a != 0)
				_putchar((j / 10) + '0');

			_putchar((j % 10) + '0');
		}
		_putchar(10);

		i++;
	}
}
