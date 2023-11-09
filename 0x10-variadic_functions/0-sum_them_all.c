#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: Number of arguments
 * @...: Variable number of arguments
 *
 * Return: The sum of all parameters, 0 if n is 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	unsigned int sum = 0;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, const unsigned int);
	}
	va_end(args);

	return (sum);
}
