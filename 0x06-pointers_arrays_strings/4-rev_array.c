#include "main.h"

/**
 * reverse_array - Prints an array of integer in reverse
 * @a: a pointer that points to an array of integers
 * @n: an int value indicating the size of the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	n -= 1;
	i = 0;
	while (i < n)
	{
		tmp = *(a + n);
		*(a + n) = *(a + i);
		*(a + i) = tmp;

		n--;
		i++;
	}
}
