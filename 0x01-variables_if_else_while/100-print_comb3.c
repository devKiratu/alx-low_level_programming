#include <stdio.h>

/**
 * main - entry point
 *
 * description: print out combinations of 2 digit numbers, with no repetition
 * in ascending order
 *
 * Return: 0 (success)
 */

int main(void)
{
	int i = 0;
	int j = 0;

	while (i < 9)
	{
		j = i + 1;

		while (j <= 9)
		{
			putchar('0' + i);
			putchar('0' + j);
			if (!(i == 8 && j == 9))
			{
				putchar(',');
				putchar(' ');
			}

			j++;
		}

		i++;
	}

	putchar('\n');

	return (0);
}
