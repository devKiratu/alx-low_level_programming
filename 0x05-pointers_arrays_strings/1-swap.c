#include "main.h"

/**
 * swap_int - swaps the value of a with that of b
 *
 * @a: first input
 * @b: second input
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
