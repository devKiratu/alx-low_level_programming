#include "main.h"

/**
 * _sqrt_recursion - calculates the natural square root of @n
 *
 * @n: input
 *
 * Return: square root if present, -1 if absent, @n if n is 0 or 1
 */

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);

	return (get_sqrt(n, 1));
}

/**
 * get_sqrt - recursive function to obtain actual root
 *
 * @n: integer input
 * @r: assumed root
 *
 * Return: square root if found or -1;
 */

int get_sqrt(int n, int r)
{
	if (r * r == n)
		return (r);

	if (n / 2 <= r)
		return (-1);

	return (get_sqrt(n, r + 1));
}
