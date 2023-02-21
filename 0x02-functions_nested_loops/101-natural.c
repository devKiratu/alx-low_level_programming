#include <stdio.h>

/**
 * sum_of_multiples - prints out sum of multiples of 3 and 5
 *
 * Return: void
 */

void sum_of_multiples(void)
{
	int i = 3;
	int sum = 0;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
		i++;
	}

	printf("%d\n", sum);
}
