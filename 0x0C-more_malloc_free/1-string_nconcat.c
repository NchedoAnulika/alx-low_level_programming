#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes from s2 to concatenate.
 *
 * Return: A pointer to the newly allocated concatenated string,
 * or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, a, b;
	char *c;

	len1 = 0;
	len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (n >= len2)
		n = len2;
	c = malloc(sizeof(char) * (len1 + n + 1));

	if (c == NULL)
		return (NULL);
	for (a = 0; a < len1; a++)
		c[a] = s1[a];
	for (b = 0; b < n; b++)
		c[a + b] = s2[b];
	c[a + b] = '\0';
	return (c);
}
