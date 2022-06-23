#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the diagonals in a square matrix
 * @a: pointer to the array
 * @size: size of array
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, sum1, sum2, total;

	sum1 = 0;
	sum2 = 0;
	total = size * size;

	for (i = 0; i < total; i++)
	{
		if (i % (size - 1) == 0 && i != (total - 1) && i != 0)
			sum2 += a[i];
	}

	for (i = 0; i < total; i++)
	{
		if (i % (size + 1) == 0)
			sum1 += a[i];
	}

	printf("%d, %d\n", sum1, sum2);
}
