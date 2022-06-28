#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * len - finds the length of string
 * @s: string
 *
 * Return: length of string
 */

int len(char *s)
{
	if (*s)
		return (1 + len(s + 1));
	return (0);
}

/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: newly concatenated string or NULL on fail
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, l, ln;
	char *nstr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	ln = len(s1) + len(s2);
	nstr = malloc((ln + 1) * sizeof(char));
	if (nstr == NULL)
		return (NULL);

	j = 0;
	l = 0;
	for (i = 0; i < ln; i++)
	{
		if (j <= len(s1))
		{
			*(nstr + i) = *(s1 + j);
			j++;
		}

		if (s2 && l < len(s2) && j > len(s1))
		{
			*(nstr + i) = *(s2 + l);
			l++;
		}
	}
	*(nstr + i) = '\0';

	return (nstr);
}
