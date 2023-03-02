#include "main.h"

/**
 * leet - convert string to leet code
 *
 * @s: input string
 *
 * Return: pointer to leeted string s
 */

char *leet(char *s)
{
	int i = 0, j;
	char letters[] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (s[i] != '\0')
	{
		j = 0;

		while (j <= 8)
		{
			if (s[i] == letters[j] || s[i] - 32 == letters[j])
				s[i] = '0' + j;
			j++;
		}
		i++;
	}

	return (s);
}

