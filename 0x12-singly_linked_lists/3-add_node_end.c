#include "lists.h"

/**
 * add_node_end - Adds a node to the end of a list
 * @head: a pointer of a pointer that points to the beginning of a list
 * @str: the new node
 *
 * Return: the address of the new element of Null if fail
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i;
	list_t *newl, *temp;
	char *newstr;

	if (str == NULL)
		return (NULL);
	newstr = strdup(str);
	if (newstr == NULL)
		return (NULL);
	newl = malloc(sizeof(list_t));
	if (newl == NULL)
		return (NULL);
	newl->str = newstr;
	for (i = 0; newstr;)
		i++;

	newl->len = i;
	newl->next = NULL;
	if (*head == NULL)
		*head = newl;
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = newl;
	}

	return (newl);
}
