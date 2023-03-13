#include "main.h"
#include <stdlib.h>

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
	int i = 0, j, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	ptr = malloc(sizeof(char *) * ac);

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

	return (ptr);
}
