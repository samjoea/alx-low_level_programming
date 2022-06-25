#include <stdio.h>

/**
 * main - prints its name
 * @argv: contains an array of string arguments
 * @argc: the size of the argv
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);

	return (0);
}
