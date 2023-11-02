#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers from min to max.
 * @min: The minimum value (inclusive).
 * @max: The maximum value (inclusive).
 *
 * Return: A pointer to the newly created array of integers,
 *         or NULL if min > max or if malloc fails.
 */
int *array_range(int min, int max)
{
	int *a;
	int s, i;

	if (min > max)
		return (NULL);
	s = max - min + 1;
	a = malloc(sizeof(int) * s);

	if (a == NULL)
		return (NULL);
	for (i = 0; i < s; i++)
		a[i] = min + i;
	return (a);
}
