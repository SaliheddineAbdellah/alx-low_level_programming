#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number given
 * @index: index of bit
 * Return: bit of index or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bitvalue;

	if (index > 63)
		return (-1);

	bitvalue = (n >> index) & 1;
	return (bitvalue);
}
