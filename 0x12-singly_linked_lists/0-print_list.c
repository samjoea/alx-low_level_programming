#include "lists.h"

/**
 * print_list - Prints all elements of list_t;
 * @h: a pointer to the structure list_t
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t elements;

	for (elements = 0; h; elements++)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (elements);
}
