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

	for (lwcase = 'a'; lwcase <= 'z'; lwcase++)
		putchar(lwcase);

	putchar(10);

	return (0);
}
