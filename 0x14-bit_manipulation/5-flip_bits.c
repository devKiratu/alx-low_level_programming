#include "main.h"

/**
 * flip_bits - checks how many bits should be flipped for @n to equal @ m
 * @n: first number
 * @m: second number
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	int len;

	len = (sizeof(unsigned long int) * 8) - 1;

	while (len >= 0)
	{
		if ((n & (1 << len)) != (m & (1 << len)))
			count++;
		len--;
	}

	return (count);
}
