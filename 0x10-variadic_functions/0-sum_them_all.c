#include "variadic_functions"
#include <stdarg.h>
/**
 * sum_them_all -  returns the sum of all its parameters.
 * @n: nbr of parameters
 * @...: parameters
 * Return: sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	int i;
	va_list parameters;
	int sum;

	if (n <= 0)
		return (0);
	else
	{
		va_start (parameters, count);
		sum = 0;
		for (i = 0; i <= n; i++)
			sum += va_arg (parameters, i);
		va_end (parameters);
		return (sum);
	}
}

