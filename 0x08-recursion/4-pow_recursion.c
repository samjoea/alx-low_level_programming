#include "main.h"

/**
 * _pow_recursion - it returns the value of x raised to y
 * @x: base integer;
 * @y: the power integer;
 *
 * Return: an integer
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);

	return (x * _pow_recursion(x, y - 1));
}
