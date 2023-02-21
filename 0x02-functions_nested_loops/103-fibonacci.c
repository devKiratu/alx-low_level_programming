#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 (success)
 */

int main(void)
{
	int i = 3;
	long int first = 1, prev = 2, temp, sum = 2;

	while (i <= 50)
	{
		temp = first + prev;
		if (temp > 4000000)
			break;
		if (temp % 2 == 0)
			sum += temp;
		first = prev;
		prev = temp;
		i++;
	}
	printf("%lu\n", sum);

	return (0);
}
