#include "main.h"

/**
 * _isdigit - checks if character is a digit between 0 - 9.
 * @c: the character to check
 *
 * Return: 1 on success an 0 on fail.
 */

int _isdigit(int c)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		if (c == digit)
			return (1);
	}
	return (0);
}
