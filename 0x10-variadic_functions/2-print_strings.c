#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - Prints strings followed by a newline
 * @separator: the string to be printed out between the strings
 * @n: the number of stringss passed
 * @...: the rest of the parameter, ellipsis
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list var;
	unsigned int i;
	char *str;

	va_start(var, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(var, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(var);

	printf("\n");
}
