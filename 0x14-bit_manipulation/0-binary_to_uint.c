#include "main.h"
/**
 * binary_to_uint - converts a binary number string to an unsigned int
 * @b: A pointer to a string containing '0' and '1' characters
 *
 * Return: The converted unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	char current_char;

	if (b == NULL)
		return (0);
	while ((current_char = *b) != '\0')
	{
		if (current_char != '0' && current_char != '1')
		{
			return (0);
		}
		result = (result << 1) + (current_char - '0');
		b++;
	}
	return (result);
}
