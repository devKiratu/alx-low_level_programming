#include "variadic_functions.h"

/**
 * sum_them_all - adds up all parameters passed to it
 * @n: number of parameters
 * Return: sum of the parameters or 0 if @n = 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i = 0;

	if (n == 0)
		return (0);

	va_start(args, n);

	while (i < n)
	{
		sum += va_arg(args, int);
		i++;
	}
	va_end(args);
	return (sum);
}
