#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _realloc - Reallocates a memory block.
 * @ptr: A pointer to the previously allocated memory.
 * @old_size: The size (in bytes) of the allocated space for ptr.
 * @new_size: The new size (in bytes) of the memory block.
 *
 * Return: A pointer to the reallocated memory block, or NULL on failure.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_p;
	unsigned int i;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		new_p = malloc(new_size);
		return (new_p);
	}
	if (new_size <= old_size)
		return (ptr);
	new_p = malloc(new_size);

	if (new_p == NULL)
		return (NULL);
	for (i = 0; i < old_size; i++)
	{
		((char *)new_p)[i] = ((char *)ptr)[i];
	}
	free(ptr);
	return (new_p);
}
