#include <stdio.h>

/**
 * main - entry point.
 *
 * description: print out the hex numbers using putchar
 *
 * Return: 0 (success)
 */

int main(void)
{
	int d_start = 0;
	int d_end = 9;
	int l_start = 97;
	int l_end = 102;
	int newline = 10;

	while (d_start <= d_end)
	{
		putchar('0' + d_start);
		d_start++;
	}

	while (l_start <= l_end)
	{
		putchar(l_start);
		l_start++;
	}

	putchar(newline);
	return (0);
}
