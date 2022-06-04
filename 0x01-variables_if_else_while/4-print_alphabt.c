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
	char lwcase[28];
	char ltr;
	int i;

	int putchar(int lwcase);

	lwcase[27] = '\0';
	
	lwcase[26] = 10;

	ltr = 'a';

	for (i = 0; i <= 26; i++)
	{
		if (i < 26)
			lwcase[i] = ltr++;

		if (lwcase[i] == 'e' || lwcase[i] == 'q')
			lwcase[i] = '\0';

		putchar(lwcase[i]);
	}
	return (0);
}
