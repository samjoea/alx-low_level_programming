#include <stdio.h>
/**
 * main - The main entry point
 *
 * Return: 0 if successfull
 */

int main(void)
{
	int x, y, a, b;
	int i, j;
	int tmp[4];

	int putchar(int tmp);

	for (x = '0'; x <= '9'; x++)
	{
		tmp[0] = x;
		for (y = '0'; y <= '9'; y++)
		{
			tmp[1] = y;
			for (a = '0'; a <= '9'; a++)
			{
				tmp[2] = a;
				for (b = '0'; b <= '9'; b++)
				{
					tmp[3] = b;
					if (x < a || (x == a && y < b))
					{
						for (i = 0; i < 2; i++)
						{
							putchar(tmp[i]);
						}
						putchar(' ');

						for (j = 2; j < 4; j++)
						{
							putchar(tmp[j]);
						}

						if (!(x == '9' && y == '8'))
						{
							putchar(',');
							putchar(' ');
						}
						else
						{
							putchar(10);
						}
					}
				}
			}
		}
	}

	return (0);
}
