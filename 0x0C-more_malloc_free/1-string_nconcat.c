#include "main.h"

/**
 * len - it calc the length of a string
 * @s: pointer to string
 *
 * Return: an int value
 */

int len(char *s)
{
	if (*s != '\0')
		return (1 + len(s + 1));
	return (0);
}

/**
 * string_nconcat - it concatenates two strings
 * @s1: pointer to main string
 * @s2: pointer to substring
 * @n: n byte of s2 to be add s1
 *
 * Return: NULL is fail or pointer to the new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, ln;
	char *pstr;

	if (n > len(s2))
		n = len(s2);

	ln = len(s1);
	pstr = malloc(sizeof *pstr * (ln + n + 1));
	if (pstr == NULL)
		return (NULL);
	if (s1 == NULL && s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	else if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";

	for (i = 0, j = 0; i < (n + ln); i++)
	{
		if (i > ln - 1)
		{
			pstr[i] = s2[j];
			j++;
		}
		else
			pstr[i] = s1[i];
	}
	pstr[i] = '\0';

	return (pstr);
}
