#include "main.h"
#include <string.h>

/**
 * _strchr - locates a character in the string
 *
 * @s: string
 * @c: character to locate
 *
 * Return: pointer to first occurrence of @c
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	int len = strlen(s);

	while (i < len)
	{
		if (s[i] == c)
			break;
		i++;
	}

	return (&s[i]);
}
