#include "main.h"
#include <string.h>
/**
 * _strspn - Get length of prefix substring.
 * @s: String to search.
 * @accept: Accepted characters.
 * Return: Length of prefix substring.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s && strchr(accept, *s))
	{
		count++;
		s++;
	}
	return (count);
}
