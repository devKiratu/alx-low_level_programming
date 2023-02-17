#include <stdio.h>

/**
 * main - entry point
 *
 * description: print out combinations of 3 digit numbers, with no repetition
 * in ascending order
 *
 * Return: 0 (success)
 */

int main(void)
{
	int i = 0;
	int j = 0;
	int k = 0;

	while (i < 9)
	{
		j = i + 1;

		while (j < 9)
		{
			k = j + 1;

			while (k <= 9)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);
				if (!(i == 7 && j == 8 && k == 9))
				{
					putchar(',');
					putchar(' ');
				}

				k++;
			}

			j++;
		}

		i++;
	}

	putchar('\n');

	return (0);
}
