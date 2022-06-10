#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: the integer to be printed
 *
 * Return: void.
 */

void print_number(int n)
{
	unsigned int a;

	a = 1000000000;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	else if (n == 0)
	{
		_putchar('0');
	}

	for (; a >= 1; a /= 10)
	{
		if ((n / a) != 0)
		{
			_putchar((n / a) % 10 + '0');
		}
	}
}
