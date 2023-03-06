#include "main.h"

/**
 * _memset - fills the first @n bytes of memory pointed by @s with @b
 *
 * @s: pointer to memory
 * @n: number of bytes
 * @b: character to use
 *
 * Return: pointer to memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}

	return (s);
}
