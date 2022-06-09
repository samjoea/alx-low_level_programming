#include <stdio.h>

/**
 * main - the main entry point
 * Description: fibonacci whose that do not exceed 4000000 and are even.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int i, j, k, sum, total;

	total = 0;
	sum = 2;
	k = 1;
	i = 2;

	while (i < 50)
	{
		if (sum < 4000000 && sum % 2 == 0)
			total += sum;

		j = sum;
		sum += k;
		k = j;

		i++;
	}
	printf("%lu\n", total);

	return (0);
}
