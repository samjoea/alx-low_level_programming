#include "main.h"

/**
 * jack_bauer - prints time starting from 00:00 to 23:59.
 *
 * Return: void.
 */

void jack_bauer(void)
{
	int i, j, a, b, c, d;

	i = 0;

	while (i < 30)
	{
		a = i / 10;
		b =  i % 10;

		for (j = 0; j < 60; j++)
		{
			c = j / 10;
			d = j % 10;

			if (i < 24)
			{
				_putchar(a + '0');
				_putchar(b + '0');
				_putchar(':');
				_putchar(c + '0');
				_putchar(d + '0');
				_putchar('\n');
			}
		}
		i++;
	}
}
