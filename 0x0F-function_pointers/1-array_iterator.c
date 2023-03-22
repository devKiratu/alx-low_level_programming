#include "function_pointers.h"

/**
 * array_iterator - executes an action on each element of the @array
 * @array: array of integer elements
 * @size: size of the array
 * @action: function to execute on each @array element
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array && action)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
