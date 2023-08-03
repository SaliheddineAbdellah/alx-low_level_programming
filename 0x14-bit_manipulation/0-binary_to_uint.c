#include "main.h"

/**
 * binary_to_uint -  converts a binary number to an unsigned int
 * @b: pointer to a 0 1 string
 * Return: decimal value
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimalvalue = 0;
	unsigned int digit;
	int i;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		digit = b[i] - '0';
		decimalvalue = (decimalvalue << 1) + digit;
	}
	return (decimalvalue);
}
