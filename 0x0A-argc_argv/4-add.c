#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - checks if charater is a number;
 * @arg: pointer to string;
 *
 * Return: 0 if it is and 1 otherwise
 */

int is_digit(char *arg)
{
	int i, flag;

	flag = 1;
	for (i = 0; arg[i]; i++)
	{
		if (arg[i] >= '0' && arg[i] <= '9')
			flag = 0;
		else
		{
			flag = 1;
			break;
		}
	}
	return (flag);
}

/**
 * main - adds two positive numbers
 * @argv: contains an array of string arguments
 * @argc: the size of the argv
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i, sum, val;

	sum = 0;

	if (argc - 1 != 0)
	{
		for (i = 1; argv[i]; i++)
		{
			val = is_digit(argv[i]);
			if (val != 0)
			{
				printf("Error\n");
				return (1);
			}
			else
				sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
		printf("%d\n", 0);

	return (0);
}
