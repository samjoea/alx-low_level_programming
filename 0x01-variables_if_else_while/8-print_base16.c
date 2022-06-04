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
	char hex = '0';
	int i;
	int num = 97;

	int putchar(int hex);

	for (i = 0; i < 16; i++)
	{
		(i < 10) ? putchar(hex++) : putchar(num++);
	}

	putchar(10);

	return (0);
}
