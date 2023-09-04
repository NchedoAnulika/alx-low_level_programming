#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locate character in string.
 * @s: String to search.
 * @c: Character to find.
 * Return: Pointer to first occurrence, or NULL.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0' && *s != c)
	{
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
