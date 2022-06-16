#include "main.h"

/**
 * _strcmp - it compares two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 *
 * Return: an integer;
 */

int _strcmp(char *s1, char *s2)
{
	int i, j;

	for (i = 0; *(s1 + i) != '\0';)
		i++;

	for (j = 0; *(s2 + j) != '\0';)
		j++;


	if (i > j)
		return ((i - j) * 10 + j);

	else if (i < j)
		return (-((j - i) * 10 + i));

	return (0);
}
