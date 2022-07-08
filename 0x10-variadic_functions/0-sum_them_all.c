#include "variadic_functions.h"

/**
 * sum_them_all - Finds the sum of all its parameter
 * @n: the number of parameters expected
 * @...: the rest of the parameter, ellipsis
 *
 * Return: the sum of all the parameter and 0 if faill
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list var;
	unsigned int i, total, zero;

	total = 0, zero = 0;
	if (n == zero)
		return (0);
	va_start(var, n);

	for (i = 0; i < n; i++)
		total += va_arg(var, int);
	va_end(var);

	return ((int)total);
}
