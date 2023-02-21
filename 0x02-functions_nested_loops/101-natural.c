#include <stdio.h>

/**
 * main - entry point
 *
 * description: prints out sum of multiples of 3 and 5
 *
 * Return: 0 (success)
 */
int main(void)
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
	return (0);
}
