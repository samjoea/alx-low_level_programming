#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - The main entry point.
 *
 * Return: 0 if successful.
 */
int main(void)
{
	int i, x, y, a;
	int tmp[3];

	int putchar(int i);

	i = '0';

	while (i <= '9')
	{
		for (x = '0'; x <= '9'; x++)
		{
			for (y = '0'; y <= '9'; y++)
			{
				if ((i != x && i < x && i != y && i < y) && (x != y && x < y))
				{
					tmp[0] = i;
					tmp[1] = x;
					tmp[2] = y;
					a = 0;
					while (a < 3)
					{
						putchar(tmp[a]);
						a++;
					}

					if (i != '8' && i < x && i != '7' && i < y)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}

		i++;
	}
	putchar(10);

	return (0);
}
