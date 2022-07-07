#include "3-calc.h"

/**
 * op_add - Finds the sum of two integers
 * @a: int one
 * @b: int two
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Finds the difference of two integers
 * @a: int one
 * @b: int two
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Finds the product of two integers
 * @a: int one
 * @b: int two
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Finds the results if an integer divides the other
 * @a: int a
 * @b: int b
 *
 * Return: the result of a / b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Finds the modulus of an integer by another integer
 * @a: int one
 * @b: int two
 *
 * Return: the result of a % b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
