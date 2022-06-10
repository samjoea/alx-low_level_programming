#include <stdio.h>
#include <math.h>

/**
 * main - prints the largest prime factor of a number.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int num;
	int i, a;

	num = 612852475143;
	a = sqrt(num);

	for (i = a; i > 2; i++)
	{
		if (num % i == 0)
		{
			printf("%d\n", i);
			break;
		}
	}

	return (0);
}
