#include "main.h"

/**
 * string_toupper - coverts lowercase to uppercase
 * @a: a pointer to the string
 *
 * Return: a string of characters
 */

char *string_toupper(char *a)
{
	int i;

	for (i = 0; *(a + i) != '\0'; i++)
	{
		if (*(a + i) > 96 && *(a + i) < 123)
			*(a + i) -= 32;
	}

	return (a);
}
