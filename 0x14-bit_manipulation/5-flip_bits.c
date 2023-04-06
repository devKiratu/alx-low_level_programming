#include "main.h"

/**
 * flip_bits - checks how many bits should be flipped for @n to equal @ m
 * @n: first number
 * @m: second number
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned int count = 0;

	result = n ^ m;

	while (result)
	{
		count += result & 1;
		result >>= 1;
	}

	return (count);
}
