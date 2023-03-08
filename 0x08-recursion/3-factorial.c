#include "main.h"

/**
 * factorial - calculates factorial of @n
 *
 * @n: integer input
 *
 * Return: factorial of @n or -1 if @n < 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
