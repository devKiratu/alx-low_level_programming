#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: pointer to old memory block
 * @old_size: size of old memory block
 * @new_size: size of new memory block
 *
 * Return: pointer to reallocated memory or NULL if operation fails
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		return (p);
	}

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (new_size > old_size)
		memcpy(p, ptr, old_size);
	else
		memcpy(p, ptr, new_size);
	free(ptr);

	return (p);
}
