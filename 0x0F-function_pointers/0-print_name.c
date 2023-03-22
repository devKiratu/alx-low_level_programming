#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to print
 * @f: pointer to function that does the actual printing
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
