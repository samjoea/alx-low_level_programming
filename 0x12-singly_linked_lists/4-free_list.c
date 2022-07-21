#include "lists.h"

/**
 * free_list - Frees a list_t list
 * @head: a pointer to the list_t list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *freed;
	list_t *n;

	freed = head;
	while (freed)
	{
		n = freed->next;
		free(freed->str);
		free(freed);
		freed = n;
	}
}
