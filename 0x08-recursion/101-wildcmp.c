#include "main.h"
#include <stdio.h>
/**
 * wildcmp - Recursively compares two strings with wildcard '*'.
 * @s1: The first string to compare.
 * @s2: The second string that contain the '*' wildcard.
 *
 * Return: 1 if identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s2 == '*')
	{
		while (*s2 == '*')
		{
			s2++;
		}
		if (*s2 == '\0')
		{
			return (1);
		}
		while (*s1)
		{
			if (wildcmp(s1, s2))
			{
				return (1);
				s1++;
			}
		}
	}
	if (*s1 == *s2 || *s2 == '?')
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
