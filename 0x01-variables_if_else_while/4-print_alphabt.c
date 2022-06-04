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
	int lwcase[25];
	int ltr;
	int i;

	int putchar(int lwcase);

	lwcase[24] = 10;

	lwcase[25] = '\0';

	ltr = 0;

	for (i = 97; i <= 122; i++)
	{
		if (i < 101)
		{
			lwcase[ltr] = i;
		}

		if (i > 101 && i < 113)
		{
			lwcase[ltr] = i;
		}

		if (i > 113)
		{
			lwcase[ltr] = i;
		}

		putchar(lwcase[ltr]);

		ltr++;
	}

	return (0);
}
