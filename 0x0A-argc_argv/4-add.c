#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds two positive numbers
 * @argv: contains an array of string arguments
 * @argc: the size of the argv
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i, sum;
	
	sum = 0;	

	if (argc - 1 != 0)
	{
		for (i = 0; argv[i]; i++)
		{
			if ((argv[i] >= '0' && argv[i] <= '9'))
			{
				sum += atoi(argv[i]);
			}

			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d", sum);
	}
	else
		printf("%d\n", 0);

	return (0);
}
