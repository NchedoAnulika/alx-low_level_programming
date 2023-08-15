#include <stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int main(void)
{
	int sum = 0;

	for (int i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("Sum of multiples of 3 or 5 below 1024: %d\n", sum);

	return (0);
}
