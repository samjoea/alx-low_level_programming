#include "main.h"

/**
 * leet - it encodes a string in 1337.
 * @a: a pointer to the string
 *
 * Return: a string of characters
 */

char *leet(char *a)
{
	int i, j, k;
	char x, y;

	char l[] = "a4A4e3E3o0O0t7T7l1L1";

	for (i = 0; *(a + i) != '\0'; i++)
	{
		for (j = 0; *(l + j) != '\0'; j++)
		{
			x = *(a + i);
			y = *(l + j);
			if ((x == y) && ((x > 96 && x < 123) || (x > 64 && x < 90)))
			{
				k = j + 1;
				*(a + i) = *(l + k);
			}
		}
	}

	return (a);
}
