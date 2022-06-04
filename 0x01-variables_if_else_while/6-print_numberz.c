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
	int lwcase[12];
	int i;
	int num;

	int putchar(int lwcase);

	lwcase[10] = 10;

	lwcase[11] = '\0';

	num = '0';

	for (i = 0; i <= 10; i++)
	{
		if (i < 10)
			lwcase[i] = num + i;

		putchar(lwcase[i]);
	}

	return (0);
}
