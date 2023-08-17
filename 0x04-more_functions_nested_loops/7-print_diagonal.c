#include "main.h"

/**
 * print_diagonal - Draw a diagonal line in the terminal.
 * @n: The number of times the character '\' should be printed.
 */
void print_diagonal(int n)
{
	int spaces, slashes;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (slashes = 0; slashes < n; slashes++)
		{
			for (spaces = 0; spaces < slashes; spaces++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
