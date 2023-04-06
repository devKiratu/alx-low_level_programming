#include "main.h"

/**
 * get_endianness - checks the endianness of the machine it is running on
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int checker = 1;

	return (*(char *)&checker == 1);
}
