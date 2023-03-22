#include "3-calc.h"

/**
 * op_add - adds two integers @a and @b
 * @a: first integer
 * @b: second integer
 * Return: sum of the two integers
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - gets the difference of two integers @a and @b
 * @a: first integer
 * @b: second integer
 * Return: difference of the two integers
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies two integers @a and @b
 * @a: first integer
 * @b: second integer
 * Return: product of the two integers
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides two integers @a and @b
 * @a: first integer
 * @b: second integer
 * Return: result of dividing the two integers
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - gets the remainder of  @a /  @b
 * @a: first integer
 * @b: second integer
 * Return: remainder of @a/@b operation
 */
int op_mod(int a, int b)
{
	return (a % b);
}
