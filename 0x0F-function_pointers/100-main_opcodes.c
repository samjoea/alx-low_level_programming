#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints opcodes of it self
 * @argc: The number of arguments in argv
 * @argv: An array of arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i, bytes;
	int (*memloc)(int, char **);
	unsigned char opcode;

	memloc = main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < bytes; i++)
	{
		opcode = *(unsigned char *)(memloc);
		printf("%.2x", opcode);
		if (i == bytes - 1)
			continue;
		printf(" ");
		memloc++;
	}
	printf("\n");

	return (0);
}
