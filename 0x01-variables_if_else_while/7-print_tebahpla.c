#include <stdio.h>

/**
 * main - Entry point
 *
 * description: print the alphabet in lowercase, and in reverse order
 *
 * Return: 0
 */

int main(void)
{
	int start = 122;
	int end = 97;
	int newline = 10;

	while (start >= end)
	{
		putchar(start);
		start--;
	}

	putchar(newline);
	return (0);
}
