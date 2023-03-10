#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point - prints multiplication of 2 numbers
 *
 * @argc: arguments count
 * @argv: arguments array
 *
 * Return: 0 (success) or 1 (failure)
 */

int main(int argc, char *argv[])
{
	if (argc > 1 && (argc == 3))
	{
		int prod = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", prod);

		return (0);
	}

	printf("Error\n");
	return (1);
}
