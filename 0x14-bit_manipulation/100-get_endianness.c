#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 big endian 1 little endian
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *ptr = (char *) &num;

	return (*ptr);
}
