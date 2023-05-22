#include <string.h>

/**
 * _strncpy - copies n src bytes to the dest string
 *
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes to obtain from src
 *
 * Return: dest - pointer to the destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while ((i < n) && (src[i] != '\0'))
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
