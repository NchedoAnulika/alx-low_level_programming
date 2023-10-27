#include "main.h"
/**
 * _strcat - Concatenates two strings.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string to be appended.
 *
 * Return: Pointer to the resulting string `dest`.
 */
char *_strcat(char *dest, char *src)
{
	char *a = dest;

	while (*dest)
	{
		dest++;
	}
	while ((*dest = *src))
	{
		dest++;
		src++;
	}
	return (a);
}
