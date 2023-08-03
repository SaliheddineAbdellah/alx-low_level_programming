#include "main.h"

/**
 * get_bit - returns the value of a given bit
 * @n: number 
 * @index: index of the bit
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitvalue;

	if (index > 63)
		return (-1);
	bitvalue = (n >> index) & 1;
	return (bitvalue);
}
