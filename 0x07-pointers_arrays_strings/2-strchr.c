#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to a string
 * @c: character to be found
 *
 * Return: char pointer to c;
 */

char *_strchr(char *s, char c)
{
	char *tmp;

	while (*s != '\0')
	{
		if (*s == c)
		{
			tmp = s;
			return (tmp);
		}
		else if (*(s + 1) == c)
		{
			tmp = (s + 1);
			return (tmp);
		}
		s++;
	}

	return (s + 1);
}
