#include "main.h"
/**
 * print_array - prints an array of integers, followed by a new line.
 *@a: array to be printed
 *@n: number of elements to be printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
}
