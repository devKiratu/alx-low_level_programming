#include "main.h"

/**
 * _strlen_recursion - calculates length of string @s
 *
 * @s: input string
 *
 * Return: length of string @s
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
