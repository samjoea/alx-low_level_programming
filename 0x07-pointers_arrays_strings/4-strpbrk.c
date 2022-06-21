#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to a string
 * @accept: pointer to prefix string
 *
 * Return: a pointer to a byte of string
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *tmp;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				tmp = &*(s + i);
				return (tmp);
			}
		}
	}

	return (0);
}
