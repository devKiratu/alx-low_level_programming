#include "main.h"
#include <stdlib.h>

/**
 * wildcmp - compares two strings @s1 and @s2
 * @s1: first string
 * @s2: second string
 * Return: 1 if the strings can be considered identical, otherwise return 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(++s1, ++s2));
	}
	else if (*s2 == '*')
	{
		s2  = get_non_wild_char(s2);
		if (*s2 == '\0')
			return (1);

		s1 = get_matching_char(s1, s2);
		if (s1 == NULL)
			return (0);
		else
			return (wildcmp(++s1, ++s2));
	}
	return (0);
}

/**
 * get_non_wild_char - gets the next character that is not '*'
 * @s: string whose first character is '*'
 * Return: substring whose first character is not '*'
 */
char *get_non_wild_char(char *s)
{
	if (*s != '*')
		return (s);
	return (get_non_wild_char(++s));
}

/**
 * get_matching_char - get @s1 substring whose first character == *s2
 * @s1: first string
 * @s2: second string
 * Return: return @s1 substring or NULL if *s1 == '\0'
 */
char *get_matching_char(char *s1, char *s2)
{
	if (*s1 == *s2)
		return (s1);
	if (*s1 == '\0')
		return (NULL);
	return (get_matching_char(++s1, s2));
}
