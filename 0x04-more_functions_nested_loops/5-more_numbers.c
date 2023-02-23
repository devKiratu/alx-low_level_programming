#include "main.h"

/**
 * more_numbers - prints 0 - 14, 10 times followed by a new line
 *
 * Return: void
 */

void more_numbers(void)
{
	int i = 0, j;

	while (i < 10)
	{
		j = 0;

		while (j <= 14)
		{
			if (j > 9)
				_putchar('0' + j / 10);
			_putchar('0' + j % 10);
			j++;
		}
		i++;
		_putchar('\n');
	}
}
