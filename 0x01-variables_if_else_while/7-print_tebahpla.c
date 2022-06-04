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
	int lwcase[28];

	int putchar(int lwcase);

	int i;
	char ltr;

	lwcase[26] = 10;

	lwcase[27] = '\0';

	ltr = 'z';

	for (i = 0; i < 27; i++)
	{
		if (i < 26)
			lwcase[i] = ltr;

		putchar(lwcase[i]);

		ltr--;
	}

	return (0);
}
