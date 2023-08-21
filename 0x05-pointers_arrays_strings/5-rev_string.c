#include "main.h"
/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to the input string.
 * Return: Length of the string.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
/**
 * rev_string - Reverses a string.
 * @s: Pointer to the input string.
 */
void rev_string(char *s)
{
	int length = _strlen(s);
	char c;
	int i;

	for (i = 0; i < length / 2; i++)
	{
		c = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = c;
	}
}
