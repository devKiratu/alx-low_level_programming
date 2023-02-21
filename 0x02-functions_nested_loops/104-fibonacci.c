#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 (success)
 */

int main(void)
{
	int i = 3;
	long int first = 1, prev = 2, temp;

	printf("%lu, %lu", first, prev);

	while (i <= 98)
	{
		temp = first + prev;
		printf(", %lu", temp);
		first = prev;
		prev = temp;
		i++;
	}
	printf("\n");

	return (0);
}
