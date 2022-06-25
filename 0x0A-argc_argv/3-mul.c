#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argv: contains an array of string arguments
 * @argc: the size of the argv
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int argv1, argv2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	argv1 = atoi(argv[1]);
	argv2 = atoi(argv[2]);
	printf("%d\n", argv1 * argv2);

	return (0);
}
