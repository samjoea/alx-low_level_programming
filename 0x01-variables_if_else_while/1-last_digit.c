#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - The main entry point
 *
 * Return: 0 which succeful
 */
int main(void)
{
	int n, lstdgt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lstdgt = n % 10;

	printf("Last digit of %d is ", n);

	if (lstdgt > 5)

		printf("%d and is greater than 5\n", lstdgt);

	else if (lstdgt == 0)

		printf("%d and is 0\n", lstdgt);

	else if (lstdgt < 6 && lstdgt != 0)

		printf("%d and is less than 6 and not 0\n", lstdgt);

	return (0);
}
