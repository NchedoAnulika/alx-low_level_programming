#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array and initializes it to zero.
 * @nmemb: The number of elements in the array.
 * @size: The size (in bytes) of each element.
 *
 * Return: A pointer to the allocated memory (initialized to zero),
 *         or NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);
	for (a = 0; a < nmemb * size; a++)
	{
		((char *)p)[a] = 0;
	}
	return (p);
}
