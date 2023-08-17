#include "main.h"

/**
 * print_triangle - Print a triangle in the terminal.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size - a - 1; b++)
			{
				_putchar(' ');
			}
			for (b = 0; b < a + 1; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
