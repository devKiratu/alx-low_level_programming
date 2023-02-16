#include <unistd.h>
#include <string.h>

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

	write(2, str, strlen(str));
	return (1);
}
