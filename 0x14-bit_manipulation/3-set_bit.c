#include "main.h"

/**
 * set_bit -  sets the value of a bit to 1 at a given index.
 * @n: pointer to number
 * @index: index to be set
 * Return: 1 for success -1 for error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
