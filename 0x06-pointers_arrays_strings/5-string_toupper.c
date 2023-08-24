#include "main.h"
/**
 * string_toupper - Changes all lowercase
 * letters of a string to uppercase.
 * @str: Pointer to the input string.
 *
 * Return: Pointer to the modified string.
 */
char *string_toupper(char *str)
{
	char *p = str;

	while (*p)
	{
		if (*p >= 'a' && *p <= 'z')
		{
			*p = *p - ('a' - 'A');
		}
		p++;
	}
	return (str);
}
