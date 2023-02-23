#include "main.h"

/**
 * print_most_numbers - prints 0 - 9, apart from 2 and 4
 * followed by a new line
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		if (i != 2 && i != 4)
			_putchar('0' + i);
		i++;
	}
	_putchar('\n');
}
