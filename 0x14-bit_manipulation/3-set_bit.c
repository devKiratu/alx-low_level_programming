#include "main.h"

/**
 * set_bit - sets the @indexth bit in @n to 1
 * @n: pointer to unsigned long integer
 * @index: position to set value as 1 in @*n
 * Return: new value of @n or -1 if error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int len;

	len = (sizeof(unsigned long int) * 8) - 1;

	if (index > len || n == NULL)
		return (-1);

	*n |= (1 << index);
	return (*n);
}
