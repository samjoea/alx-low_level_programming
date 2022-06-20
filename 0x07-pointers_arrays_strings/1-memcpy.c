#include "main.h"

/**
 * _memcpy - copies memory ara
 * @dest: pointer to a string
 * @src: constant byte to be applied
 * @n: size of string
 *
 * Return: char pointer dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}

	return (dest);
}
