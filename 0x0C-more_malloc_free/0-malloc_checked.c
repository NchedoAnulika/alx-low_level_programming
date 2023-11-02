#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Allocates memory with error handling.
 * @b: The number of bytes to allocate.
 *
 * Return: A pointer to the allocated memory on success.
 *        Exits with status 98 on failure.
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
