#include "main.h"

/**
 * clear_bit - clears the @index-th bit in @n
 * @n: pointer to unsigned long integer
 * @index: position of bit in @n to clear
 * Return: 1 if bit successfully cleared and -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int len;

	len = (sizeof(unsigned long int) * 8) - 1;

	if (index > len)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
