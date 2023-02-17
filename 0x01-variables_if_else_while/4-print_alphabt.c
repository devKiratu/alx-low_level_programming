#include <stdio.h>

/**
 * main - Entry point
 *
 * description: print the alphabet in lowercase, except letters q and e
 *
 * Return: 0
 */

int main(void)
{
	int start = 97;
	int end = 122;
	int newline = 10;

	while (start <= end)
	{
		if (start != 'q' && start != 'e')
			putchar(start);
		start++;
	}

	putchar(newline);
	return (0);
}
