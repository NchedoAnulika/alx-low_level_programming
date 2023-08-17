#include "main.h"

/**
 * print_line - Draw a straight line in the terminal.
 * @n: The number of times the character '_' should be printed.
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		i = 0;
		while (i < n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
}
