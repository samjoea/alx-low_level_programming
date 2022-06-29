#include "main.h"
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
 * notspace - checks for space is string
 * @c: pointer to string
 *
 * Return: 1 if true and 0 if false
 */
int notspace(char c)
{
	if (c == ' ')
		return (0);
	return (1);
}

/**
 * nwords - checks the number of words in string
 * @c: pointer to string
 *
 * Return: the number of words in a string
 */
int nwords(char *c)
{
	int i, n, flag, words;

	flag = 0, words = 0;
	for (i = 0; c[i] != '\0'; i++)
	{
		n = notspace(c[i]);
		if (n == 0)
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			words++;
		}
	}
	return (words);
}

/**
 * strtow - returns a pointer to an array of strings
 * @str: a pointer to a string
 *
 * Return: a pointer to a new string
 */
char **strtow(char *str)
{
	int i, j, a, b, c, n, flag, begin, end, ln, words;
	char **nstr, *tmp;

	a = 0, c = 0, flag = 0;
	ln = len(str);
	words = nwords(str);
	nstr = malloc(words * (sizeof(char *) + sizeof(int)) - 1);
	if (str == NULL || words == 0)
		return (NULL);
	if (nstr == NULL)
		return (NULL);

	for (i = 0; i <= ln; i++)
	{
		n = notspace(str[i]);
		if (n == 0 || str[i] == '\0')
		{
			if (flag == 1)
			{
				end = i;
				tmp = malloc((c + 1) * sizeof(char));
				if (tmp == NULL)
					return (NULL);
				for (j = begin, b = 0; j < end; j++, b++)
					tmp[b] = str[j];
				tmp[b] = '\0';
				nstr[a] = tmp;
				a++, c = 0, flag = 0;
			}
		}
		else if (flag == 0 && c++ == 0)
		{
			flag = 1;
			begin = i;
		}
	}
	nstr[a] = NULL;

	return (nstr);
}
