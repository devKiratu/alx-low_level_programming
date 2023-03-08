#include "main.h"
#include <string.h>

/**
 * is_palindrome - checks whether a string @s is a palindrome
 *
 * @s: string to check
 *
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int left = 0, right = strlen(s) - 1;

	return (check_palindrome(s, left, right));
}

/**
 * check_palindrome - compares characters in @s to check if @s is a palindrome
 *
 * @s: string to check
 * @left: left most character
 * @right: right most character
 *
 * Return: 1 if palindrome, 0 if not
 */

int check_palindrome(char *s, int left, int right)
{
	if (left < right)
	{
		if (s[left] == s[right])
			return (check_palindrome(s, left + 1, right - 1));
		else
			return (0);
	}

	return (1);
}
