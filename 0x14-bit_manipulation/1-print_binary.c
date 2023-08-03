#include "main.h"

/**
 * print_binary - prints binary rep of a decimal
 * @n: decimal to be represented
 */
void print_binary(unsigned long int n)
{
	int i;
	int bit;
	int firstsetbit = 0;

	if (n == 0)
		_putchar('0');
	for (i = 63; i >= 0; i--)
	{
		bit = (n >> i) & 1;
		if (bit == 1)
			firstsetbit = 1;
		if (firstsetbit)
			_putchar(bit + '0');
	}
}
