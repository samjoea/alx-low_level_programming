#include "main.h"
#include <stdlib.h>

/**
 * _strstr - locate a substring
 * @haystack: pointer to a string
 * @needle: substring
 * Return: Pointer to beginning of substring, or NULL if not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	i = 0;
	k = 0;
	for (; haystack[i] != '\0';)
	{
		j = 0;
		while (needle[j + k] != '\0' && needle[j + k] == haystack[i + k])
		{
			if (haystack[i + k] != needle[j + k])
				break;
			k++;
		}

		if (needle[j + k] == '\0')
			return (&haystack[i]);
		j++;
		i++;
	}
	return (NULL);
}
