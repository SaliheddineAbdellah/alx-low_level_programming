#include "main.h"

/**
 * get_endianness -  checks the endianness.
 * Return: 1 if big 0 if little
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *y = (char *) &x;

	return (*y);
}
