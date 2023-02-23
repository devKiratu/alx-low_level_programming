#include "main.h"

/**
 * print_square - prints a square using the # character
 * @size: length of square
 *
 * Return: void
 */

void print_square(int size)
{
	int i = 0, j;

	if (i >= size)
		_putchar('\n');

	while (i < size)
	{
		j = 0;

		while (j < size)
		{
			_putchar('#');
			j++;
		}

		_putchar('\n');
		i++;
	}
}
