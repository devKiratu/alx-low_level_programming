#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number string
 * Return: result of conversion or 0 if @b contains a non-binary char,
 * or NULL if @b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int len;

	if (b == NULL)
		return (0);
	len = strlen(b) - 1;

	while (len >= 0)
	{
		if (*b == '0' || *b == '1')
		{
			sum += ((*b - '0') * _pow(2, len));
			b++;
			len--;
		}
		else
		{
			return (0);
		}
	}
	return (sum);
}

/**
 * _pow - calculates value of @x raised to @y
 * @x: base
 * @y: power
 * Return: result of @x raised to @y
 */
int _pow(int x, int y)
{
	int prod = 1;

	while (y > 0)
	{
		prod *= x;
		y--;
	}
	return (prod);
}
