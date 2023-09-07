#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _realloc - Reallocates memory using malloc and free
 * @ptr: Pointer to previously allocated memory
 * @old_size: Old size in bytes
 * @new_size: New size in bytes
 *
 * Return: Pointer to reallocated memory or NULL on failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);

	if (new_size < old_size)
		old_size = new_size;
	for (i = 0; i < old_size; i++)
		*((char *)new_ptr + i) = *((char *)ptr + i);
	free(ptr);
	return (new_ptr);
}
