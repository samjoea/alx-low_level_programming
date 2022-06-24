#include "main.h"

/**
 * _atoi - Prints every othr character of a string
 * @s: a pointer to a string
 *
 * Return: an integer value
 */

int _atoi(char *s)
{
	int sign;
	unsigned int sum;
	char flag;

	flag = 0;
	sum = 0;
	sign = 1;
	while (*s)
	{
		if (*s == '-')
			sign *= -1;

		if (*s >= '0' && *s <= '9')
		{
			flag = 1;
			sum = sum * 10 + *s - '0';
		}
		else if (flag)
			break;
		s++;
	}
	if (sign < 0)
		sum = (-sum);

	return (sum);
}
