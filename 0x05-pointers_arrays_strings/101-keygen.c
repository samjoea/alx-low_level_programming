#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a random password
 *
 * Return: Always 0.
 */
int main(void)
{
	int mrand, count, sum;

	srand(time(NULL));
	for (count = 0, sum = 2772; sum > 122; count++)
	{
		mrand = (rand() % 125) + 1;
		printf("%c", mrand);
		sum -= mrand;
	}
	printf("%c", sum);

	return (0);
}
