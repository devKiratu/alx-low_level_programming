#include <stdio.h>

/**
 * main - Entry point
 *
 * description: print the alphabet in lowercase
 *
 * Return: 0
 */

int main(void)
{
	int start = 97;
	int end = 123;
	int newline = 10;

	while (start < end)
	{
		putchar(start);
		putchar(newline);
		start++;
	}

	return (0);
}
