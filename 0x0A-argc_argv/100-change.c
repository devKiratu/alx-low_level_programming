#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point - prints minimum coins to give as change
 *
 * @argc: arguments count
 * @argv: arguments array
 *
 * Return: 0 (success) or 1 (failure)
 */

int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int i, cents, count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents <= 0)
	{
		printf("0\n");
	}
	else
	{
		i = 0;

		while (i < 5)
		{
			while (cents > 0 && (cents - coins[i] >= 0))
			{
				cents -= coins[i];
				count++;
			}
			i++;
		}

		printf("%d\n", count);
	}

	return (0);
}
