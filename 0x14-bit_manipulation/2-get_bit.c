#include "main.h"

/**
 * get_bit - gets the bit at index @index of @n
 * @n: unsigned long integer to be converted to binary
 * @index: index of the bit we're looking for
 * Return: value of the bit at @n[@index] or -1 if error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int len;

	len = (sizeof(unsigned long int) * 8) - 1;

	if (index > len)
		return (-1);

	if (n & (1 << index))
		return (1);
	else
		return (0);
}
