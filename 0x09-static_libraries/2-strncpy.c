#include "main.h"
/**
 * _strncpy - Copies a string up to n bytes.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string to be copied.
 * @n: Maximum number of bytes to copy.
 *
 * Return: Pointer to the resulting string `dest`.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *a = dest;

	while (n > 0 && *src)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (a);
}
