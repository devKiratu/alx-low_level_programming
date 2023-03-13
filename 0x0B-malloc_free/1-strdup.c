#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - creates a duplicate of @str
 *
 * @str: string to duplicate
 *
 * Return: pointer to duplicated string or NULL if the operation failed
 */

char *_strdup(char *str)
{
	char *ptr;
	int i = 0;

	if (str == NULL)
		return (0);

	ptr = malloc((sizeof(char) * strlen(str)) + 1);

	if (ptr == NULL)
		return (0);

	while (str[i] != '\0')
	{
		ptr[i] = str[i];
		i++;
	}

	ptr[i] = '\0';

	return (ptr);
}
