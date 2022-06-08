#include "main.h"

/**
 * print_alphabet - Prints from lowercase a to z.
 *
 * Return: void.
 */

void print_alphabet(void)
{
	char lwcase;

	for (lwcase = 'a'; lwcase <= 'z'; lwcase++)
	{
		_putchar(lwcase);
	}
	_putchar(10);
}
