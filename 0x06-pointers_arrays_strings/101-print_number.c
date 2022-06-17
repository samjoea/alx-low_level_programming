#include "main.h"

/**
 * print_number - prints an integer.
 * @n: integer to be printed
 *
 * Return: void
 */

void print_number(int n)
{
	unsigned int i;

	i = 1000000000;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	else if (n == 0)
	{
		_putchar('0');
	}

	for (; i >= 1; i /= 10)
	{
		if (n / i != 0)
		{
			_putchar(((n / i) % 10) + '0');
		}
	}
}
