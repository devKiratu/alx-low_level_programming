#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: number of time to print it
 * Return: void
 */

void print_diagonal(int n)
{
	int i = 0, j;

	if (i >= n)
		_putchar('\n');

	while (i < n)
	{
		j = 1;

		while (j <= i)
		{
			_putchar(' ');
			j++;
		}

		_putchar('\\');
		_putchar('\n');
		i++;
	}
}
