#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sums of left and right matrix diagonals
 *
 * @a: the array representing the matrix in memory
 * @size: length of matrix
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int left = 0, right = size - 1, len = size * size;
	int sum_left = 0, sum_right = 0;

	/* calculate left diagonal sum */
	while (left < len)
	{
		sum_left += a[left];
		left += size + 1;
	}

	/* calculate right diagonal sum */
	while (right <= (len - size))
	{
		sum_right += a[right];
		right += size - 1;
	}

	printf("%d, %d\n", sum_left, sum_right);
}
