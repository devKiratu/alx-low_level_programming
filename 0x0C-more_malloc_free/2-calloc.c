#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - creates an array of @nmemb elements of size @size bytes each
 *
 * @nmemb: size of the array
 * @size: size of each member of the array
 *
 * Return: pointer to the array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	int len;

	if (nmemb == 0 || size == 0)
		return (NULL);

	len = size * nmemb;
	ptr = malloc(len);

	if (ptr == NULL)
		return (NULL);

	return (memset(ptr, 0, len));
}
