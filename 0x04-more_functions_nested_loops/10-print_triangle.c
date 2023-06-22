#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: size of triangle
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= i; j++)
				_putchar(' ');
			for (k = i; k <= size; k++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
