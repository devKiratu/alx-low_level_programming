#include "main.h"

/**
 * main - entry point
 *
 * description: print out _putchar followed by a new line
 *
 * Return: 0 (success)
 */

int main(void)
{
	char str[] = "_putchar\n";
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	return (0);
}
