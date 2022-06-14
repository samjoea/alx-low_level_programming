#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints up to n values of an array
 * @a: pointer to an integer
 * @n: the nth integer value
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i, j;

	for (i = 0; (*(a + i)) != '\0';)
	{
		i++;
	}

	if (!(n > i))
	{
		for (j = 0; j < n; j++)
		{
			printf("%d", *(a + j));

			if (j != n - 1)
				printf(", ");
		}
	}
	printf("\n");
}
