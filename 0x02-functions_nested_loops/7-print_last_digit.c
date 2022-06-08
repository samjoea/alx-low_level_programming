#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: the integer to check
 *
 * Return: the last digit of number.
 */

int print_last_digit(int n)
{
	int l;

	if (n < 0)
	{
		l = (n / -1) % 10;
		_putchar(l + '0');
		return (l);
	}

	l = n % 10;
	_putchar(l + '0');
	return (l);
}
