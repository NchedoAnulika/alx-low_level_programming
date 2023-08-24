#include "main.h"
/**
 * cap_string - Capitalizes the first letter
 * of each word in a string.
 * @str: Pointer to the input string.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *str)
{
	int new_word = 1;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		str[i] == '!' || str[i] == '?' || str[i] == '"' ||
		str[i] == '(' || str[i] == ')' || str[i] == '{' ||
		str[i] == '}')
		{
			new_word = 1;
		}
		else if (new_word && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= ('a' - 'A');
			new_word = 0;
		}
		else
		{
			new_word = 0;
		}
	}
	return (str);
}
