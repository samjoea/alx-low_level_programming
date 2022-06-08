#include "main.h"

/**
 * print_alphabet_x10 - Prints from lowercase a to z.
 *
 * Return: void.
 */

void print_alphabet_x10(void)
{
	char lwcase;
	int i;

	i = 0;
	while (i < 10)
	{
		for (lwcase = 'a'; lwcase <= 'z'; lwcase++)
		{
			_putchar(lwcase);
		}
		_putchar(10);

		i++;
	}
}
