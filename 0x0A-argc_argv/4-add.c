#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point
 *
 * @argc: arguments count
 * @argv: arguments array
 *
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	int i = 1, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		while (i < argc)
		{
			if (!isdigit(*argv[i]))
			{
				printf("Error\n");
				return (1);
			}

			sum += atoi(argv[i]);
			i++;
		}
		printf("%d\n", sum);
	}

	return (0);
}
