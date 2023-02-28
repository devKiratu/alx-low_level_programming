#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 *
 * @s: the string to reverse
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0, j, len = strlen(s);
	char temp;

	j = len - 1;

	while (i != j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
