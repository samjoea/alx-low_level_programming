#include <stdio.h>

/**
 * main - the main entry point
 * Description: the program prints the first 50 fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int i, j, k, sum;

	sum = 2;
	k = 1;
	i = 2;
	printf("%lu, ", k);
	while (i < 50)
	{
		printf("%lu, ", sum);

		j = sum;
		sum += k;
		k = j;

		i++;
	}
	printf("%lu\n", sum);

	return (0);
}
