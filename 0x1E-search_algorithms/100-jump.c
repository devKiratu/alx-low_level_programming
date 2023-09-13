#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers using the
 *	jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: integer to search for in the array
 * Return: first index where the value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t left = 0, right = 0,  m = (int)sqrt(size);

	if (array == NULL)
		return (-1);
	while (right < size && array[right] < value)
	{
		printf("Value checked ");
		printf("array[%lu] = [%d]\n", right, array[right]);
		left = right;
		right = right + m;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", left, right);

	while (left < size)
	{
		printf("Value checked ");
		printf("array[%lu] = [%d]\n", left, array[left]);
		if (array[left] == value)
			return (left);
		left++;
	}
	return (-1);
}
