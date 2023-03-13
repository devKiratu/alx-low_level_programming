#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array- creates an array of characters and initializes it with @c
 *
 * @size: array size
 * @c: character for array initialization
 *
 * Return: array of characters if created successfully, 0 if not.
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	if (size == 0)
		return (0);

	ptr = malloc(sizeof(c) * size);

	if (ptr == NULL)
		return (0);

	while (i < size)
	{
		ptr[i] = c;
		i++;
	}

	return (ptr);
}
