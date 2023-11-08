#include "function_pointers.h"
/**
 * int_index - Searches for an integer in an array.
 * @array: Pointer to the integer array to be searched.
 * @size: The number of elements in the array.
 * @cmp: A function pointer for custom integer comparison.
 *
 * Return: Index of the first matching element or
 * -1 if no match or error conditions.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
