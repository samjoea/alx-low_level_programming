#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @a: a pointer to the string
 *
 * Return: a string of characters
 */

char *rot13(char *a)
{
	int i, j;
	char *alpha, *rot;

	alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	rot = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; *(a + i) != '\0'; i++)
	{
		for (j = 0; *(alpha + j) != '\0'; j++)
		{
			if (*(a + i) == *(alpha + j))
			{
				*(a + i) = *(rot + j);
				break;
			}
		}
	}

	return (a);
}
