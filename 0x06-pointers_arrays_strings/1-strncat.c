#include "main.h"
/**
 * _strncat - Concatenates two strings using
 * at most n bytes from src.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string to be appended.
 * @n: Maximum number of bytes to copy from src.
 *
 * Return: Pointer to the resulting string `dest`.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *a = dest;

	while (*dest)
	{
		dest++;
	}
	while (*src && n > 0)
	{
		*dest++ = *src++;
		n--;
	}
	*dest = '\0';
	return (a);
}
