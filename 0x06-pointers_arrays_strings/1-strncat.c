#include "main.h"

/**
 * _strncat - appends to the nth string to another string
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: int value
 *
 * Return: pointer to the string dest;
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, len;

	for (len = 0; *(dest + len) != '\0';)
		len++;

	for (i = 0; i < n && *(src + i) != '\0'; i++)
		*(dest + len + i) = *(src + i);
	*(dest + len + i) = '\0';

	return (dest);
}
