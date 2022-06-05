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
	int i, x, a;
	int tmp[2];

	int putchar(int i);

	i = '0';

	while (i <= '9')
	{
		for (x = '0'; x <= '9'; x++)
		{
			if (i != x && i < x)
			{
				tmp[0] = i;
				tmp[1] = x;
				a = 0;

				while (a < 2)
				{
					putchar(tmp[a]);
					a++;
				}

				if (i != '8' && i < x)
				{
					putchar(',');
					putchar(' ');
				}

				else
					putchar(10);
			}
		}

		i++;
	}

	return (0);
}
