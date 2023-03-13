#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings @s1 and @s2
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to concatenated string or NULL if operation fails
 */

char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL && s2 == NULL)
		return (0);

	if (s1 == NULL && s2)
	{
		return (dup_str(s2));
	}
	else if (s2 == NULL && s1)
	{
		return (dup_str(s1));
	}
	else
	{
		return (concat_two(s1, s2));
	}
}

/**
 * dup_str - duplicate of passed string
 *
 * @s: string to duplicate
 *
 * Return: pointer to duplicate string
 */
char *dup_str(char *s)
{
	int i = 0;
	char *ptr = malloc((sizeof(char) * strlen(s)) + 1);

	if (ptr == NULL)
		return (0);

	while (s[i] != '\0')
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';

	return (ptr);
}

/**
 * concat_two - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to concatenated string or NULL if operation fails
 */

char *concat_two(char *s1, char *s2)
{
	int i = 0, j = 0, len;
	char *ptr;

	len = (sizeof(char) * strlen(s1)) + (sizeof(char) * strlen(s2)) + 1;
	ptr = malloc(len);

	if (ptr == NULL)
		return (0);

	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		ptr[i + j] = s2[j];
		j++;
	}

	ptr[i + j] = '\0';
	return (ptr);
}
