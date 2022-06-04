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
	int i;
	int coma = 44;
	int space = ' ';
	int nxtln = 10;

	int putchar(int hex);

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);

		if (i < '9')
		{
			putchar(coma);
			putchar(space);
		}
	}

	putchar(nxtln);

	return (0);
}
