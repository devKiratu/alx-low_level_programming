#include <string.h>

/**
 * _strcat - concatenates two strings
 *
 * @dest: first part of the string
 * @src: second part of the string
 *
 * Return: pointer to resulting string
 */

char *_strcat(char *dest, char *src)
{
	int i = strlen(dest);
	int j = 0;

	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}

	dest[i + j] = src[j];

	return (dest);
}

