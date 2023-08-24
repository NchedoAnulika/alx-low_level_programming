#include "main.h"
/**
 * reverse_array - Reverses the content of
 * an array of integers.
 * @a: Pointer to the array of integers.
 * @n: The number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n / 2; i++)
	{
		int value = a[i];

		a[i] = a[n - 1 - i];
		a[n - 1 - i] = value;
	}
}
