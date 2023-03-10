#include <string.h>

/**
 * _strncat - concatenates n src bytes to the dest string
 *
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes to obtain from src
 *
 * Return: dest - pointer to the concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = strlen(dest);
	int j = 0;

	while ((j < n) && (src[j] != '\0'))
	{
		dest[i + j] = src[j];
		j++;
	}

	dest[i + j] = '\0';

	return (dest);
}
