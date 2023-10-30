#include <stdlib.h>
#include "main.h"
/**
 * create_array - Initializes an array with a character.
 * @size: Size of the array.
 * @c: Character for initialization.
 * Return: Pointer to the array or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	a = (char *)malloc(size * sizeof(char));

	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
