#include "main.h"
/**
 * factors - finds the factors of a number.
 * @n: input number.
 * @x: iterator.
 * Return: the factors of n.
 */
int factors(int n, int x)
{
	if (x % (n / x) == 0)
	{
		if (x * (n / x) == n)
			return (x);
		else
			return (-1);
	}
	return (0 + factors(n, x + 1));
}

/**
 * _sqrt_recursion - it returns the value of x raised to y
 * @n: integer value
 *
 * Return: an integer
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);

	return (0 + factors(n, 2));
}
