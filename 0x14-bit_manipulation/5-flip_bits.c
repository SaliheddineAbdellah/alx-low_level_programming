#include "main.h"

/**
 * flip_bits - eturns the number of bits you would need
 * to flip to get from one number to another.
 * @n: furst number
 * @m: second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorresult = n ^ m;
	unsigned int count = 0;
	int i;

	for (i = 63; i >= 0; i--)
	{
		count += xorresult & 1;
		xorresult >>= 1;
	}
	return (count);
}
