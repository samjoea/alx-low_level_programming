#include "main.h"

/**
 * _strncpy - it copies a string into another string
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: int value
 *
 * Return: pointer to the string dest;
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + i) != '\0'; i++)
		*(dest + i) = *(src + i);

	for (; i < n; i++)
		*(dest + i) = '\0';

	return (dest);
}
