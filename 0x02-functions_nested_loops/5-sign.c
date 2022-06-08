#include "main.h"

/**
 * print_sign - prints the sign of a number, if +, - or 0.
 * @n: the integer to check
 *
 * Return: 1 if +, -1 if - and 0 if 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	_putchar('-');
	return (-1);
}
