#include <stdio.h>

/**
 * main - entry point
 *
 * description: print out all possible combinations of single digit numbers
 *
 * Return: 0 (success)
 */

int main(void)
{
	int start = 0;
	int end = 9;
	int comma = 44;
	int space = 32;
	int newline = 10;

	while (start <= end)
	{
		putchar('0' + start);

		if (start != end)
		{
			putchar(comma);
			putchar(space);
		}

		start++;
	}

	putchar(newline);

	return (0);
}
