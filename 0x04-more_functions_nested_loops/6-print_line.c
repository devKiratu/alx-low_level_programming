#include "main.h"

/**
 * print_line - prints a line using the underscore character
 * @n: length of line
 * Return: void
 */

void print_line(int n)
{
	int i = 1;

	while (i <= n)
	{
		_putchar('_');
		i++;
	}

	_putchar('\n');
}
