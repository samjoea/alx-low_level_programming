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
	unsigned int i;
	list_t *newl;
	char *newstr;

	newl = malloc(sizeof(list_t));
	if (newl == NULL)
		return (NULL);

	newstr = strdup(str);
	if (newstr == NULL)
	{
		free(newl);
		return (NULL);
	}
	newl->str = newstr;
	for (i = 0; newstr;)
		i++;

	newl->len = i + 1;
	newl->next = *head;
	*head = newl;

	return (*head);
}
