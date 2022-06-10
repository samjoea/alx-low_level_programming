#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: the integer to be printed
 *
 * Return: void.
 */

void print_number(int n)
{
	int a, b;

	b = n / 10;
	if (b != 0 && b > 9 && b < 99)
	{
		a = n / 10;
		_putchar((a / 10) + '0');
		_putchar((a % 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (b != 0 && b > 99)
	{
		a = n / 100;
		_putchar((a / 10) + '0');
		_putchar((a % 10) + '0');
		_putchar(((n / 10) % 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (b != 0 && b < 0)
	{
		a = n * -1;
		_putchar('-');
		_putchar((a / 10) + '0');
		_putchar((a % 10) + '0');
	}
	else if (b != 0 && b > 0)
	{
		a = n / 10;
		_putchar(a + '0');
		_putchar((n % 10) + '0');
	}
	else
	{
		_putchar(n + '0');
	}

}
