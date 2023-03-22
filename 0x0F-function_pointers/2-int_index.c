#include "function_pointers.h"

/**
 * int_index - searches for an integer defined in @cmp
 * @array: array of integers to search from
 * @size: size of the array
 * @cmp: function that searches for a match from @array
 * Return: first index of matching element,
 * or -1 if @size <= 0 || no match is found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int *start;

	if (!array || !cmp || size <= 0)
		return (-1);

	start = array;

	while (array < (array + size))
	{
		if (cmp(*array) != 0)
			return (array - start);
		array++;
		size--;
	}

	return (-1);
}
