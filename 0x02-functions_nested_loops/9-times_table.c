#include "main.h"

/**
 * times_table - print out multiplication table from 0 to 9
 *
 * Return: void
 */

void times_table(void)
{
	int i = 0, j, temp;

	while (i < 10)
	{
		j = 0;

		while (j < 10)
		{
			temp = i * j;

			if (temp > 9)
			{
				_putchar('0' + temp / 10);
				_putchar('0' + temp % 10);
			}
			else
			{
				_putchar(' ');
				_putchar('0' + temp);
			}

			if (j == 8)
				break;

			_putchar(',');
			_putchar(' ');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
