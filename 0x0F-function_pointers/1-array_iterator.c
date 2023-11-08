#include "function_pointers.h"
/**
 * array_iterator - Iterates through an integer array
 * and applies a custom action.
 * @array: Pointer to the integer array to be processed.
 * @size: The number of elements in the array.
 * @action: A function pointer for a custom action
 * to be applied to each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(*array);
		array++;
	}
}
