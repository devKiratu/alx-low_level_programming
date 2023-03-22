#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point, program performs +,-,*,/,% operations on two integers
 * @argc: arguments count
 * @argv: arguments array
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int (*func)(int, int);
	int num1, num2;
	char *op = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	func = get_op_func(op);
	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (num2 == 0 && ((*op == '/') || (*op == '%')))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", func(num1, num2));
	return (0);
}
