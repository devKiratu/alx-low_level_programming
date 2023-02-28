#include "main.h"
#include <string.h>

/**
 * puts_half - prints the second half of a string
 *
 * @str: input
 *
 * Return: void
 */

void puts_half(char *str)
{
	int len = strlen(str);
	int i = len / 2;

	if (len % 2 != 0)
		i += 1;

	while (i < len)
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
