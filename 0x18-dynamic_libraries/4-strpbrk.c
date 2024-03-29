#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - Search string for bytes in set.
 * @s: String to search.
 * @accept: Set of bytes to search for.
 * Return: Pointer to match, or NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		int i;

		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
