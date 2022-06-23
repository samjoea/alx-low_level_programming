#include "main.h"

/**
 * set_string - sets the value of a pointer to char
 * @s: a double pointer to a string
 * @to: pointer to the destination string
 *
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
