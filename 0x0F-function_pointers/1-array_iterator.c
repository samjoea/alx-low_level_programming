#include "function_pointers.h"

/**
 * array_iterator - it executs a parameter function on each element of an array
 * @array: pointer to array
 * @size: the size of the array
 * @action: a pointer to a function
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
