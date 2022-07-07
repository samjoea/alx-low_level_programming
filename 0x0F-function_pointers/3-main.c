#include "3-calc.h"

/**
 * main - The main entry point
 * @argc: The number of arguments in argv
 * @argv: An array of arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int n1, n2;
	char *opr;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	opr = argv[2];

	if (argv[2][1] != '\0'  || get_op_func(opr) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*opr == '/' || *opr == '%') && n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(opr)(n1, n2));

	return (0);
}
