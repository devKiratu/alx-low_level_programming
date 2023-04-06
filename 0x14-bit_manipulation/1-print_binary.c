#include "main.h"

/**
 * print_binary - prints binary equivalent of @n
 * @n: unsigned long integer
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int len, start_printing = 0;
	unsigned long int result;

	len = (sizeof(unsigned long int) * 8) - 1;

	while (len >= 0)
	{
		result = n >> len;

		if (result & 1)
		{
			start_printing = 1;
			_putchar('1');
		}
		else if (start_printing)
		{
			_putchar('0');
		}
		len--;
	}

	if (!start_printing)
		_putchar('0');
}
