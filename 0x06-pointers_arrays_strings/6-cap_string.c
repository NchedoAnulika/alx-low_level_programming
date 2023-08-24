#include "main.h"
/**
 * cap_string - Capitalizes all words in a string.
 * @str: Pointer to the input string.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *str)
{
	char *ptr = str;
	char separators[] = " \t\n,;.!?\"(){}";

	while (*ptr)
	{
		int i;

		for (i = 0; separators[i]; i++)
		{
			if (*ptr == separators[i])
			{
				break;
			}
			if (*ptr >= 'a' && *ptr <= 'z')
			{
				*ptr -= 'a' - 'A';
				break;
			}
		}
		ptr++;
	}
	return (str);
}
