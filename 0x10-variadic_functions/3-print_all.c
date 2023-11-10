#include "variadic_functions.h"
/**
 * print_all - Print anything based on the given format.
 * @format: Format string
 * @...: Variable number of arguments
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *separator = "";

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, (float)va_arg(args, double));
				break;
			case 's':
				{
					char *str = va_arg(args, char *);

					if (str == NULL)
					{
						str = "(nil)";
					}
					printf("%s%s", separator, str);
					break;
				}
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(args);
}
