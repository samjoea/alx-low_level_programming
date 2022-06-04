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
	int lwcase[26];
	int ltr;
	int i;

	int putchar(int lwcase);

	lwcase[25] = '\0';

	lwcase[24] = 10;

	i = 0;
	ltr = 'a';

	while (i <= 24)
	{

		if (ltr == 'e' || ltr == 'q')
			lwcase[i] = ++ltr;

		else if (i < 24)
		{
			lwcase[i] = ltr;
		}

		else
			i = 24;

		putchar(lwcase[i]);

		i++;

		ltr++;

	}

	return (0);
}
