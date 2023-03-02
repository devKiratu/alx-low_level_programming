#include "main.h"

/**
 * string_toupper - changes lowercase letters to uppercase
 *
 * @s: the string
 *
 * Return: the string with uppercase letters
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
		i++;
	}

	return (s);
}
