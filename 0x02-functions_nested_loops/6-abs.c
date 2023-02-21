#include "main.h"

/**
 * _abs - prints the absolute value of an integer input
 *
 * @x: input
 *
 * Return: the absolute value of input;
 */

int _abs(int x)
{
	if (x < 0)
	{
		return (x * -1);
	}
	else
	{
		return (x);
	}
}
