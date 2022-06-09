#include <stdio.h>

/**
 * main - the main entry point
 * Description: the program prints the sum of all multiples of 3 or 5.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, sum;

	sum = 0;
	i = 0;
	while (i < 1024)
	{
		if (i % 3 == 0)
			sum += i;

		else if (i % 5 == 0)
			sum += i;

		i++;
	}
		printf("%d\n", sum);
	return (0);
}
