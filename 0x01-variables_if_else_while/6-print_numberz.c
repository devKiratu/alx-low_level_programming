#include <stdio.h>

/**
 * main - Entry point
 *
 * description: print all single digit numbers, base 10, using putchar
 *
 * Return: 0 (success)
 */

int main(void)
{
	int start = 0;
	int newline = 10;

	while (start < 10)
	{
		putchar('0' + start);
		start++;
	}
	putchar(newline);

	return (0);
}
