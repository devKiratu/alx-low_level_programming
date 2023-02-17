#include <stdio.h>

/**
 * main - Entry point
 *
 * description: print the alphabet in lowercase and uppercase
 *
 * Return: 0
 */

int main(void)
{
	int lc_start = 97;
	int lc_end = 122;
	int uc_start = 65;
	int uc_end = 90;
	int newline = 10;

	while (lc_start <= lc_end)
	{
		putchar(lc_start);
		lc_start++;
	}

	while (uc_start <= uc_end)
	{
		putchar(uc_start);
		uc_start++;
	}

	putchar(newline);
	return (0);
}
