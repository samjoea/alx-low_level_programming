#include "main.h"

/**
 * infinite_add - it adds two numbers
 * @n1: first number to be added to
 * @n2: second number
 * @r: the results of the addition
 * size_r: the size of r
 *
 * Return: a string of characters.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, len_n1, len_n2;

	for (len_n1 = 0; *(n1 + len_n1) != '\0';)
	{
		if (*(n2 + len_n1) == '\0')
			len_n2 = len_n1;

		len_n1++;
	}

	if (size_r < len_n1 || size_r < len_n2)
		return (0);

	if (len_n1 > len_n2)
	{
		for (i = len_n2, j = 0; *(n1 + i) != '\0'; i++, j++)
		{
			*(r + j) = ((*(n1 + i) - '0') + (*(n2 + j) - '0');
		}

		return (r);
	}
	else if (len_n1 == len_n2)
	{
		for (i = 0; *(n1 + i) != '\0'; i++)
		{
			*(r + i) = (((*(n1 + i) - '0') + (*(n2 + i)) - '0'));
		}
	}

	return (r);
}
