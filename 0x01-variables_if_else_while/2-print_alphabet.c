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
	int ltr = 97;
	int i;

	int putchar(int lwcase);

	int lwcase[27];

	lwcase[27] = '\0';

	for (i = 0; i <= 26
			; i++)
	{
		if (i == 26)
			lwcase[i] = 10;

		else
			lwcase[i] = ltr + i;

		putchar(lwcase[i]);
	}

	return (0);
}
