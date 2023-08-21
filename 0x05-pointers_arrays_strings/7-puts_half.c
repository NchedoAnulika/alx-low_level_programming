#include "main.h"
/**
 * puts_half - Prints the second half of a string followed by a new line.
 * @str: Pointer to the input string.
 */
void puts_half(char *str)
{
	int length = 0;
	int start;
	int i;

	while (str[length] != '\0')
		length++;

	start = (length + 1) / 2;

	for (i = start; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
