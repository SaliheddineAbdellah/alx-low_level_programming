#include "main.h"

/**
 * flip_bits - nb of bits to be flipped
 * to get identical numbers
 * @n: number 1
 * @m: number 2
 * Return: number of bits to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, nbrbits = 0;
	unsigned int currentbit;
	unsigned int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		currentbit = exclusive >> i;
		if (currentbit & 1)
			nbrbits++;
	}
	return (nbrbits);
}
