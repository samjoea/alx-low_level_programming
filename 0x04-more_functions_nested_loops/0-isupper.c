#include "main.h"

/**
 * _isupper - checks if character is uppercase.
 * @c: the character to check
 *
 * Return: 1 on success an 0 on fail.
 */

int _isupper(int c)
{
	char upcase;

	for (upcase = 'A'; upcase <= 'Z'; upcase++)
	{
		if (c == upcase)
			return (1);
	}
	return (0);
}
