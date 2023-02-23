#include <stdio.h>
#include "main.h"

/**
 * main - entry point - prints out largest prime factor
 *
 * Return: 0 (success)
 */

int main(void)
{
	largest_prime_factor(612852475143);

	return (0);
}

/**
 * largest_prime_factor - prints the largest prime factor of number given
 *
 * @n: number to test
 *
 * Return: void
 */
void largest_prime_factor(long int n)
{

	int i = 2;

	while (i < n)
	{
		while (n % i == 0)
		{
			n /= i;
		}
		i++;
	}
	printf("%lu\n", n);
}
