#include <stdio.h>

/**
 * main - Entry point
 *
 * description: print all single digit numbers, base 10
 *
 * Return: 0 (success)
 */

int main(void)
{
	int start = 0;

	while (start < 10)
	{
		printf("%d", start);
		start++;
	}
	printf("\n");

	return (0);
}
