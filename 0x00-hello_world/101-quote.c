#include <stdio.h>

/**
 * main - Entry point
 *
 * description: output to stderr, without using printf or puts
 *
 * Return: 1 - error
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(str, sizeof(char), sizeof(str), stderr);
	return (1);
}
