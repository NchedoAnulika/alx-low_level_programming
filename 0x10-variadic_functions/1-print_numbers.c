#include "variadic_functions.h"
/**
 * print_numbers - Print integers separated by a string
 * @separator: String to separate the integers
 * @n: Number of integers to print.
 * @...: Variable number of integer arguments.
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		unsigned int num = va_arg(args, const unsigned int);

		printf("%d", num);

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
