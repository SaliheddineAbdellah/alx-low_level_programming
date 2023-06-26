#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: to be adjusted
 */
void puts_half(char *str)
{
	int length;
	int i;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2 == 0)
	{
		length = length / 2;
	}
	else if (length % 2 == 1)
	{
		length = (length + 1) / 2;
	}
	for (i = length; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

