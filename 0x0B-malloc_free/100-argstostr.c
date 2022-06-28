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
 * argstostr - concatenates all the arguments of a program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: a pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, ln;
	char *nstr;

	if (ac == 0 || av == NULL)
		return (NULL);

	ln = 0;
	for (i = 0; i < ac; i++)
		ln += len(av[i]);

	ln += (ac + 1);
	nstr = malloc(ln * sizeof(char));
	if (nstr == NULL)
	{
		free(nstr);
		return (NULL);
	}

	k = 0;
	for (i = 0; i < ac ; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			nstr[k] = av[i][j];
			k++;
		}
		nstr[k] = '\n';
		k++;
	}

	return (nstr);
}
