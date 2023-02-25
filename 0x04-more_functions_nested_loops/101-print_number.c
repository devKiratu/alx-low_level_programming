#include "main.h"

/**
 * print_number - prints given input using _putchar
 *
 * @n: integer to print
 *
 * Return: void
 */

void print_number(int n)
{
	int first_digit, position, zeros, count = 0;
	unsigned int input = n, new_n = n;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	/* handle negative numbers*/
	if (n < 0)
	{
		_putchar(45);
		new_n = -new_n;
		input = -input;
	}

	/* get the number of digits in the input*/
	while (input != 0)
	{
		input /= 10;
		count++;
	}

	/* print the digits */
	zeros = count - 1;

	while (zeros >= 0)
	{
		position = _pow(10, zeros);
		first_digit = new_n / position;
		_putchar('0' + first_digit);
		new_n = new_n - (first_digit * position);
		zeros--;
	}
}

/**
 * _pow - calculates the result of raising an integer to a power
 *
 * @base: the base
 * @power: the power to raise to
 *
 * Return: the result
 */
int _pow(int base, int power)
{
	int result = 1;

	while (power > 0)
	{
		result *= base;
		power--;
	}

	return (result);
}
