#include "lists.h"

/**
 * add_node - Adds a node to the beginnig of a list
 * @head: a pointer of a pointer that points to the beginning of a list
 * @str: the new node
 *
 * Return: the address of the new element of Null if fail
 */

list_t *add_node(list_t **head, const char *str)
{
	size_t i;
	list_t *newl;

	newl = malloc(sizeof(list_t));
	if (newl == NULL)
		return (NULL);

	newl->str = strdup(str);
	for (i = 0; str;)
		i++;

	newl->len = i;
	newl->next = *head;
	*head = newl;

	return (*head);
}
