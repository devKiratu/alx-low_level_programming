#include "main.h"

/**
 * is_prime_number - checks if @n is prime
 *
 * @n: number to check
 *
 * Return: 1 if prime, 0 if not prime
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (check_prime(n, 2));
}

/**
 * check_prime - checks if a number is prime recursively
 *
 * @n: number to check
 * @i: current divisor
 *
 * Return: 1 if prime, 0 if not
 */

int check_prime(int n, int i)
{
	if (n % i == 0)
		return (0);

	if (i * i > n)
		return (1);

	return (check_prime(n, i + 1));
}
