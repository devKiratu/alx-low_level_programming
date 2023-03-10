#include "main.h"

/**
 * main - entry point. prints program's name
 *
 * @argc: number of commandline arguments passed
 * @argv: array of pointers to arguments passed
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	char *name = argv[0];

	while (*name != '\0')
	{
		_putchar(*name);
		name++;
	}
	_putchar('\n');
	(void)argc;

	return (0);
}
