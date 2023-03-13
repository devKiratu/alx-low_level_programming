#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - concatenates commandline args
 *
 * @ac: arguments count
 * @av: arguments array
 *
 * Return: concatenated args or NULL
 */

char *argstostr(int ac, char **av)
{
	char *ptr;
	int i = 0, j = 0, k = 0, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (j < ac)
	{
		len += strlen(av[j]) + 1;
		j++;
	}

	ptr = malloc((sizeof(char) * len) + 1);

	if (ptr == NULL)
		return (NULL);

	while (i < ac)
	{
		j = 0;

		while (av[i][j] != '\0')
		{
			ptr[k] = av[i][j];
			j++;
			k++;
		}
		ptr[k] = '\n';
		k++;
		i++;
	}
	ptr[k] = '\0';

	return (ptr);
}
