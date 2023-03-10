#include "main.h"

/**
 * main - entry point
 *
 * @argc: arguments count
 * @argv: arguments vector - array of arguments entered
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	_putchar('0' + (argc - 1));
	(void)argv;
	_putchar('\n');

	return (0);
}
