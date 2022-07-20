#include "lists.h"

/**
 * list_len - Finds the number of elements in a linked list_t list
 * @h: a pointer to the structure list_t
 *
 * Return: the number of elements
 */

size_t list_len(const list_t *h)
{
	size_t elements;

	for (elements = 0; h; elements++)
	{
		h = h->next;
	}
	return (elements);
}
