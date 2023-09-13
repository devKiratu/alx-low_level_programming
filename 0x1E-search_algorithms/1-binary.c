#include "search_algos.h"

void print_array(int *array, size_t left, size_t right);

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: integer to search for
 * Return: index where the value is located else -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		print_array(array, left, right);
		mid = (left + right) / 2;
		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
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
