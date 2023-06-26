#include "main.h"
/**
 * _puts -  prints a string, followed by a new line, to stdout.
 * @str: to be printed
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		i++;
	}
	_putchar('\n');
}
