#include "main.h"

/**
 * _memcpy - copies @n bytes from @src to @dest
 *
 * @dest: destination memory area
 * @src: the source memory area
 * @n: bytes to copy
 *
 * Return: pointer to destination @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
