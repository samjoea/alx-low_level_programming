#include "main.h"

/**
 * print_numbers - Prints from 0 - 9.
 *
 * Return: void.
 */

void print_most_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		if (!(i == 2 || i == 4))
			_putchar(i + '0');

		i++;
	}
	_putchar(10);
}
