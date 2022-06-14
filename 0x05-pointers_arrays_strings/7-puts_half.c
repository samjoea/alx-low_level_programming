#include "main.h"

/**
 * puts_half - Prints second half of a string
 * @str: a pointer that points to a string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i, n, len;

	for (i = 0; (*(str + i)) != '\0';)
	{
		i++;
	}

	len = i;

	n = len;
	if (n % 2 == 0)
	{
		n /= 2;
		while (n < len)
		{
			_putchar(*(str + n));
			n++;
		}
	}
	else if (n % 2 != 0)
	{
		n = (len + 1) / 2;
		while (n < len)
		{
			_putchar(*(str + n));
			n++;
		}
	}

	_putchar(10);
}
