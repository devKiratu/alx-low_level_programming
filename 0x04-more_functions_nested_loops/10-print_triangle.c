#include "main.h"

/**
 * print_triangle - prints a triangle using the # character
 *
 * @size: height of triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i = 0, j, k;

	if (i >= size)
		_putchar('\n');

	while (i < size)
	{
		/* print the spaces before the # character */
		j = size - i - 1;

		while (j > 0)
		{
			_putchar(' ');
			j--;
		}

		/* print the # characters */
		k = i;

		while (k >= 0)
		{
			_putchar('#');
			k--;
		}

		_putchar('\n');
		i++;
	}
}
