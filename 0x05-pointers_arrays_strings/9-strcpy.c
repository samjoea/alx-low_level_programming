#include "main.h"

/**
 * _strcpy - copies string from a source to a destination
 * @dest: string destination pointer
 * @src: string source pointer
 *
 * Return: a string of characters
 */

char *_strcpy(char *dest, char *src)
{
	int i, j;

	for (i = 0; (*(src + i)) != '\0';)
	{
		i++;
	}

	j = 0;
	while (j <= i)
	{
		*(dest + j) = *(src + j);

		j++;
	}

	return (dest);
}
