#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point, program prints opcodes
 * @argc: arguments count
 * @argv: arguments array
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i = 0, bytes;
	unsigned char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ptr = (unsigned char *)main;
	while (i < bytes)
	{
		printf("%02x ", *(ptr + i));
		i++;
	}
	printf("\n");
	return (0);
}

