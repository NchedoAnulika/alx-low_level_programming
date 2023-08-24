#include "main.h"

/**
 * rot13 - Encodes a string using ROT13 cipher.
 * @str: Pointer to the input string.
 *
 * Return: Pointer to the modified string.
 */
char *rot13(char *str)
{
	char main[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; main[j] != '\0'; j++)
		{
			if (str[i] == main[j])
			{
				str[i] = rot[j];
				break;
			}
		}
	}
	return (str);
}
