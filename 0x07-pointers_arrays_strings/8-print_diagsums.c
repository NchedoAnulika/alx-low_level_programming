#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Print sums of matrix diagonals.
 * @a: Pointer to square matrix.
 * @size: Matrix size.
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0;
	int *p1 = a;
	int *p2 = a + size - 1;
	int i;

	for (i = 0; i < size; i++)
	{
		sum1 += *p1;
		sum2 += *p2;
		p1 += size + 1;
		p2 += size - 1;
	}
	printf("%d, %d\n", sum1, sum2);
}
