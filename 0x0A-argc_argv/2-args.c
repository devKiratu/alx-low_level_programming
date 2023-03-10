#include "main.h"

/**
 * main - entry point
 *
 * @argc: arguments count
 * @argv: arguments array
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int i = 0, j;

	while (i < argc)
	{
		j = 0;

		while (argv[i][j] != '\0')
		{
			_putchar(argv[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}

	return (0);
}
