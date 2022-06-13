#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to an integer value a
 * @b: pointer to an integer value b
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
