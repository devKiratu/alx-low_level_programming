#include "search_algos.h"

void print_array(int *array, size_t left, size_t right);
int bin_search_recursive(int *array, size_t left, size_t right, int value);

/**
 * advanced_binary - searches for a value in a sorted array of integers using
 *	an advanced binary search algorithm that returns the first index of
 *	@value even if it appears multiple times in the @array
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: integer to search for
 * Return: index where the value is located else -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1;

	if (array == NULL)
		return (-1);
	return (bin_search_recursive(array, left, right, value));

}

/**
 * bin_search_recursive - performs binary search recursively
 * @array: pointer to the first element of the array to search in
 * @left: starting index of subarray
 * @right: last index of subarray
 * @value: value to search for
 * Return: first index of value or -1
 */
int bin_search_recursive(int *array, size_t left, size_t right, int value)
{
	size_t mid, index, temp;

	if (left <= right)
	{
		print_array(array, left, right);
		mid = (left + right) / 2;
		if (array[mid] < value)
			return (
			bin_search_recursive(array,  mid + 1, right, value));
		else if (array[mid] > value)
			return (
			bin_search_recursive(array,  mid - 1, right, value));
		else if (array[mid] == value)
		{
			temp = mid;
			index = bin_search_recursive(array, left, mid - 1, value);
			if ((int)index != -1)
				return (index);
			else
				return (temp);
		}

	}
	return (-1);
}

/**
 * print_array - prints the array being searched
 * @array: pointer to the first element of the array
 * @left: starting element for printing
 * @right: last element to print
 * Return: void
 */
void print_array(int *array, size_t left, size_t right)
{
	printf("Searching in array: ");
	while (left <= right)
	{
		printf("%d", array[left]);
		if (left == right)
			printf("\n");
		else
			printf(", ");
		left++;
	}
}
