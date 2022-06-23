#include "main.h"
/**
 * prime - finds a prime number.
 * @n: input number.
 * @x: iterator.
 * Return: 1 if n is prime or 0 if n is not prime.
 */
int prime(unsigned int n, unsigned int x)
{
	if (n % x == 0)
	{
		if (n == x)
			return (1);
		else
			return (0);
	}
	return (0 + prime(n, x + 1));
}

/**
 * is_prime_number - prints a prime number
 * @n: integer value
 *
 * Return: 1 if n is prime and 0 if n is not prime.
 */

int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (0);

	return (0 + prime(n, 2));
}
