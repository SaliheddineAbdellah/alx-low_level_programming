#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: to be reversed
 */
void print_rev(char *s)
{
	int i;
	int j;

	i = 0;
	while (*s != '\0')
	{
		s++;
		i++;
	}
	s--;
	for (j = i; j > 0; j--)
	{
		_putchar(*s);
	}
}
