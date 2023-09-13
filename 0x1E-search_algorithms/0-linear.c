#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using the
 *	linear search algorithm
 * @array: array of integers to search in
 * @size: number of elements in the array
 * @value: integer to search for in the array
 * Return: first index where the value is located or -1 if not found
 *	or array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);
	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
