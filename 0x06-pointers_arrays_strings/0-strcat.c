#include "main.h"

/**
 * _strcat - appends string to another string
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 *
 * Return: pointer to the string dest;
 */

char *_strcat(char *dest, char *src)
{
	int i, len;

	for (len = 0; *(dest + len) != '\0';)
		len++;

	for (i = 0; *(src + i) != '\0'; i++)
		*(dest + len + i) = *(src + i);
	*(dest + len + i) = '\0';

	return (dest);
}
