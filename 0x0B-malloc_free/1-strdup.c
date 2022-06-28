#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to an allocated space;
 * Description: the function returns a pointer to an allocated
 * space in memory, which contains a copy of the string given as
 * a parameter
 *
 * @str: the string
 *
 * Return: a pointer to a string or NULL if fail
 */

char *_strdup(char *str)
{
	int i, j, len;
	char *nstr;

	if (str == NULL)
		return (NULL);
	len = 0;
	for (i = 0; *(str + i) != '\0'; i++)
		len++;

	nstr = malloc((len + 1) * sizeof(char));
	if (nstr == NULL)
		return (NULL);

	for (j = 0; *(str + j) != '\0'; j++)
		*(nstr + j) = *(str + j);
	*(nstr + j) = '\0';

	return (nstr);
}
