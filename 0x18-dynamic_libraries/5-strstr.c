#include "main.h"
#include <stddef.h>
/**
 * _strstr - Locate substring in string.
 * @haystack: String to search in.
 * @needle: Substring to search for.
 * Return: Pointer to match, or NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*n && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
