#include "main.h"

/**
 * reverse_array - reverses an integer array
 *
 * @a: the int array
 * @n: number of elements in the int array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int temp;

	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
