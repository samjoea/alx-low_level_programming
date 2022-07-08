#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - Prints number followed by a newline
 * @separator: the string to be printed out between the numbers
 * @n: the number of integers passed
 * @...: the rest of the parameter, ellipsis
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list var;
	unsigned int i;

	va_start(var, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(var, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(var);

	printf("\n");
}
