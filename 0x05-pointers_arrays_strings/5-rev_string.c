#include "main.h"

/**
 * rev_string - Prints a string in reverse
 * @s: a pointer that points to a string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i, j, a;
	char tmp;

	for (i = 0; (*(s + i)) != '\0';)
	{
		i++;
	}

	j = i - 1;
	a = 0;
	while (a < j)
	{
		tmp = *(s + j);
		*(s + j) = *(s + a);
		*(s + a) = tmp;

		j--;
		a++;
	}
}
