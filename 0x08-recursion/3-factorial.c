#include "main.h"
/**
 * factorial - returns the factorial of a given number.
 * @n: the number to calculate its factorial
 * Return: the factorial of n
 */
int factorial(int n)
{
	int resultfactorial = 1;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	resultfactorial = n * factorial(n - 1);
	return (resultfactorial);
}
