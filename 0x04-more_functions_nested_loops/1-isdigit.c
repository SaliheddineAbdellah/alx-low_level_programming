#include "main.h"
/**
 * _isdigit - checks if the input is a digit
 * @c: to be checked
 * Return: 1 if digit 0 if not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
