#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum num of coins to make change for an amount
 * @argv: contains an array of string arguments
 * @argc: the size of the argv
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int num, coins;

	coins = 0;
	if (argc > 2 || argc == 1)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	if (num < 0)
	{
		coins = 0;
		printf("%d\n", coins);
		return (0);
	}

	coins += num / 25;
	num %= 25;
	coins += num / 10;
	num %= 10;
	coins += num / 5;
	num %= 5;
	coins += num / 2;
	num %= 2;
	coins += num / 1;

	printf("%d\n", coins);

	return (0);
}
