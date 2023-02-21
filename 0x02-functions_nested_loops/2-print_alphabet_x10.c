#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times;
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i = 0, j;

	while (i < 10)
	{
		j = 0;

		while (str[j] != '\0')
		{
			_putchar(str[j]);
			j++;
		}

		i++;
	}
}
