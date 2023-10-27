#include "main.h"
/**
 * _memset - Fill memory area with a constant byte.
 * @s: Memory area to be filled.
 * @b: Constant byte value.
 * @n: Number of bytes to fill.
 * Return: Pointer to the filled memory area.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
