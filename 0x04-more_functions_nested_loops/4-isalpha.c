#include "main.h"

/**
 * _isalpha - checks if character is a letter lower or upper case.
 * @c: the character to check
 *
 * Return: 1 on success an 0 on fail.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	return (0);
}
