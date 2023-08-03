#include "main.h"

/**
 * set_bit - sets a value of a bit in a idx
 * @n: pointer to number
 * @index: index of the bit
 * Return: 1 success -1 fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}

