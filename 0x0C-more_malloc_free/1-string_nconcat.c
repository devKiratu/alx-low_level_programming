#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenate @n bytes of @s2 to @s1
 *
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to use from @s2
 *
 * Return: pointer to created string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int len = n >= strlen(s2) ? strlen(s2) : n;

	if (s1 == NULL && s2 == NULL)
	{
		ptr = malloc(1);
		if (ptr == NULL)
			return (NULL);
		ptr[0] = '\0';
		return (ptr);
	}
	else if (s2 == NULL)
	{
		len = strlen(s1);
		return (concat_one(s1, len));
	}
	else if (s1 == NULL)
	{
		return (concat_one(s2, len));
	}
	else
	{
		return (concat_two(s1, s2, len));
	}
}

/**
 * concat_one - concatenates  @s upto @len bytes
 *
 * @s: string to concatenate
 * @len: maximum bytes to consider
 *
 * Return: pointer to new string
 */
char *concat_one(char *s, int len)
{
	char *ptr;
	int i = 0;

	ptr = malloc(len + 1);
	if (ptr == NULL)
		return (NULL);

	while (i < len)
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/**
 * concat_two - concatenates two strings, tested to ensure they are not NULL
 *
 * @s1: first string
 * @s2: second string
 * @len: required bytes from @s2
 *
 * Return: pointer to concatenated string
 */

char *concat_two(char *s1, char *s2, int len)
{
	char *ptr;
	int i = 0, j = 0;

	ptr = malloc(strlen(s1) + len + 1);
	if (ptr == NULL)
		return (NULL);
	while (*s1)
	{
		ptr[i] = *s1;
		i++;
		s1++;
	}
	while (j < len)
	{
		ptr[i + j] = *s2;
		j++;
		s2++;
	}
	ptr[i + j] = '\0';
	return (ptr);
}
