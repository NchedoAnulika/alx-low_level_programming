#include <stdlib.h>
#include "main.h"
/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: Pointer to the concatenated string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *c;
	int len1 = 0, len2 = 0, a, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	c = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (c == NULL)
		return (NULL);
	for (a = 0; a < len1; a++)
		c[a] = s1[a];
	for (b = 0; b < len2; b++)
		c[len1 + b] = s2[b];
	c[len1 + len2] = '\0';
	return (c);
}
