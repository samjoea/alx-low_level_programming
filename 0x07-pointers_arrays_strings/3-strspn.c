#include "main.h"

/**
 * _strspn - gets the length of a prefix string
 * @s: pointer to a string
 * @accept: pointer to prefix string
 *
 * Return: the number of bytes in the initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, count;

	count = 0;
	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				count++;
				break;
			}
		}

		if (*(accept + j) == '\0')
			break;
	}

	return (count);
}
