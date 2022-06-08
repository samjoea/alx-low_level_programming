#include "main.h"

/**
 * _islower - checks if character is lowercase.
 * @c: the character to check
 *
 * Return: 1 on success an 0 on fail.
 */

int _islower(int c)
{
	char lwcase;

	for (lwcase = 'a'; lwcase <= 'z'; lwcase++)
	{
		if (c == lwcase)
			return (1);
	}
	return (0);
}
