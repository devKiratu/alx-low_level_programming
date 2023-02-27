#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: the string to reverse
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0, j = 0, k = 0;
	char temp;

	while (s[i] != '\0')
	{
		i++;
	}

	j = i - 1;

	while (k != j)
	{
		temp = s[k];
		s[k] = s[j];
		s[j] = temp;
		k++;
		j--;
	}
}
