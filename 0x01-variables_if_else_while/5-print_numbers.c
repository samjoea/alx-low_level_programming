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

	int putchar(int lwcase);

	for (lwcase = '0'; lwcase <= '9'; lwcase++)
	{
		putchar(lwcase);
	}

	putchar(10);

	return (0);
}
