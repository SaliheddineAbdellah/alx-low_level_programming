#include "main.h"

/**
 * clear_bit - sets a bit to 0 in a idx
 * @n: number to be set
 * @index: index of the bit to be changed
 * Return: -1 fail 1 success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
