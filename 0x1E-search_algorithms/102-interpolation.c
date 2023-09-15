#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 *	using the interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: integer to search for
 * Return: first index where @value is located or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos = 0, low = 0, high = size - 1;

	if (array == NULL)
		return (-1);

	while (pos < size)
	{
		pos = (low + (((double)(high - low) /
			(array[high] - array[low])) * (value - array[low])));
		if (pos < size)
		{
			printf("Value checked ");
			printf("array[%lu] = [%d]\n", pos, array[pos]);
		}
		else
		{
			printf("Value checked array[%lu] is out of range\n",
				pos);
		}
		if (array[pos] == value)
			return (pos);
		else if (array[pos] > value)
			high = pos - 1;
		else if (array[pos] < value)
			low = pos + 1;
	}
	return (-1);
}
