#include "3-calc.h"
#include <string.h>
#include <stdio.h>

/**
 * get_op_func - gets the right operation based on operator @s
 * @s: operator received as input
 * Return: pointer to a function that makes @s operation on two integers
 * or NULL if the operator is not permitted
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[6] = {
	    {"+", op_add},
	    {"-", op_sub},
	    {"*", op_mul},
	    {"/", op_div},
	    {"%", op_mod},
	    {NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (ops[i].f);
}
