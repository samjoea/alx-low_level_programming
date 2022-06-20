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
	char *tmp;

	tmp = dest;
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	return (tmp);
}
