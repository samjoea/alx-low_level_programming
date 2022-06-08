#include "main.h"

/**
 * _abs - prints the absolute value of an integer.
 * @n: the integer to check
 *
 * Return: the absolute value of integer.
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}

	else if (n == 0)
	{
		return (0);
	}

	return (n / -1);
}
