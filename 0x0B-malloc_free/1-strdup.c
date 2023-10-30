#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Duplicates a string.
 * @str: The string to duplicate.
 *
 * Return: Pointer to the duplicated string or NULL if it fails.
 */
char *_strdup(char *str)
{
	char *s;
	int length = 0;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[length])
	{
		length++;
	}
	s = (char *)malloc((length + 1) * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= length; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
