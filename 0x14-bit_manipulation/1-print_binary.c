#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be represented
 * Result: binary representation of a number
 */

void print_binary(unsigned long int n)
{
	int i, j = 0;
	unsigned int curpos;

	for (i = 63; i >= 0; i--)
	{
		curpos = n >> i;
		if (curpos & 1)
		{
			_putchar('1');
			j++;
		}
		else if (j)
			_putchar('0');
	}
	if (!j)
		_putchar('0');
}
