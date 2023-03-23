#include "variadic_functions.h"

/**
 * print_numbers - prints numbers passed to it
 * @separator: separator to use in printing the numbers
 * @n: numbers count
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0, val;

	if (n == 0)
		return;

	va_start(args, n);

	while (i < n)
	{
		val = va_arg(args, int);

		if (separator == NULL || i == (n - 1))
			printf("%d", val);
		else
			printf("%d%s", val, separator);
		i++;
	}

	printf("\n");
	va_end(args);
}
