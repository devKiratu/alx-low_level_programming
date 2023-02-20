#include <stdio.h>

/**
 * main - Entry point
 *
 * description: print out two pairs of number combinations without repeating
 *
 * Return: 0 (success)
 */

int main(void)
{
	int i = 0;
	int j;

	while (i < 99)
	{
		j = i + 1;

		while (j <= 99)
		{
			putchar('0' + i / 10);
			putchar('0' + i % 10);
			putchar(' ');
			putchar('0' + j / 10);
			putchar('0' + j % 10);

			if (i == 98 && j == 99)
				break;
			putchar(',');
			putchar(' ');
			j++;
		}

		i++;
	}

	putchar('\n');

	return (0);
}

