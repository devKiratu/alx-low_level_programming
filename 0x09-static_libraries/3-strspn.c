#include "main.h"

/**
 * _strspn - get length of a prefix substring that contains @accept
 *
 * @s: main string to check for presence of @accept
 * @accept: string to be contained in prefix substring
 *
 * Return: length of prefix
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i = 0, j = 0, found = 0;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				count++;
				found = 1;
				break;
			}
			found = 0;
			j++;
		}
		if (!found)
			return (count);

		i++;
	}

	return (count);
}


