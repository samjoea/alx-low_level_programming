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
	char lwcase;
	char ltr = 'A';

	char upcase[27];

	int putchar(int upcase);

	int i;

	upcase[27] = '\0';

	for (lwcase = 'a'; lwcase <= 'z'; lwcase++)
		putchar(lwcase);

	for (i = 0; i < 27; i++)
	{
		if (i == 26)
			upcase[i] = 10;

		else
			upcase[i] = ltr++;

		putchar(upcase[i]);
	}

	return (0);
}
