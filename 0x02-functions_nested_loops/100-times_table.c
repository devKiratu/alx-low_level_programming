#include "main.h"

/**
 * print_times_table - print multiplication table for input
 *
 * @n: input
 *
 * Return: void
 */

void print_times_table(int n)
{
	int i = 0, j, temp;

	if (n >= 0 && n <= 15)
	{
		while (i <= n)
		{
			j = 0;

			while (j <= n)
			{
				temp = i * j;
				print_cell(temp, j);
				if (j == n)
					break;
				_putchar(',');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}

/**
 * print_cell - responsible for printing out the cells of a row
 *
 * @temp: cell content
 * @j: cell position in the particular row
 *
 * Return: void
 */
void print_cell(int temp, int j)
{
	if (temp > 99)
	{
		_putchar(' ');
		_putchar('0' + temp / 100);
		_putchar('0' + (temp / 10) % 10);
		_putchar('0' + temp % 10);
	}
	else if (temp > 9)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar('0' + temp / 10);
		_putchar('0' + temp % 10);
	}
	else
	{
		if (j != 0)
		{
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('0' + temp);
	}
}
