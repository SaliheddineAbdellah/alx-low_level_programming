#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to 0 and 1 chars
 * Return: converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int count;
	unsigned int decimalvalue = 0;

	if (!b)
		return (0);

	for (count = 0; b[count]; count++)
	{
		if (b[count] < '0' || b[count] > '1')
			return (0);

		decimalvalue = decimalvalue * 2 + (b[count] - '0');
	}

	return (decimalvalue);
}
