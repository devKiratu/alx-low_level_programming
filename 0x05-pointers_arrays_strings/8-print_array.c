#include "main.h"
#include <stdio.h>

/**
 * print_array - prints array elements
 *
 * @a: array
 * @n: number of elements to print
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	if (n <= 0)
	{
		printf("\n");
		return;
	}

	while (i < (n - 1))
	{
		printf("%d, ", a[i]);
		i++;
	}

	printf("%d\n", a[i]);
}
