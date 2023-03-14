#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * strtow - splits a string @str into an array of words
 *
 * @str: array to split
 *
 * Return: pointer to the created strings array, or NULL if operation fails
 */

char **strtow(char *str)
{
	int i = 0, size, len;
	char **ptr;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	size = get_word_count(str);
	ptr = malloc(sizeof(char *) * (size + 1));
	if (ptr == NULL)
		return (NULL);
	while (*str != '\0')
	{
		while (isspace(*str))
			str++;
		if (*str != '\0')
		{
			char *start = str;

			while (*str != '\0' && !isspace(*str))
				str++;

			len = str - start;
			ptr[i] = malloc(sizeof(char) * (len + 1));
			if (ptr[i] == NULL)
			{
				while (i >= 0)
				{
					free(ptr[i]);
					i--;
				}
				free(ptr);
				return (NULL);
			}
			strncpy(ptr[i], start, len);
			ptr[i][len] = '\0';
			i++;
		}
	}
	ptr[i] = NULL;
	return (ptr);
}

/**
 * get_word_count - gets the number of words present in a string @str
 *
 * @str: string to check
 *
 * Return: number of words present
 */

int get_word_count(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		while (isspace(*str))
			str++;

		if (*str != '\0')
		{
			while (!isspace(*str))
				str++;
			count++;
		}
	}

	return (count);
}
