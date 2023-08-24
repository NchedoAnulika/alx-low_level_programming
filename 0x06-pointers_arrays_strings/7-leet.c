#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: Pointer to the input string.
 *
 * Return: Pointer to the modified string.
 */
char *leet(char *str)
{
	char *ptr = str;
	char map[] = "aAeEoOtTlL";
	char replacement[] = "4433007711";

	while (*ptr)
	{
		int i;

		for (i = 0; map[i]; i++)
		{
			if (*ptr == map[i])
			{
				*ptr = replacement[i];
				break;
			}
		}
		ptr++;
	}
	return (str);
}
