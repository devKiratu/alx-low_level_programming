#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point. Prints name of file the program was compiled from
 *
 * Return: 0 (success)
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
