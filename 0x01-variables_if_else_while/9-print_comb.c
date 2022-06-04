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
	int num[12];
	int ltr;

	int putchar(int hex);

	num[10] = 10;

	num[11] = '\0';

	ltr = '0';

	for (i = 0; i <= 10; i++)
	{
		if (i  < 10)
		{
			num[i] = ltr++;
		}

		putchar(num[i]);

		if (i < 9)
		{
			putchar(coma);
			putchar(space);
		}
	}

	return (0);
}
