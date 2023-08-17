#include <stdio.h>
#include <math.h>

/**
 * main - Entry point of the program.
 * Finds and prints the largest prime factor.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long num = 612852475143;
	long largest_prime_factor = 2;

	while (num > largest_prime_factor)
	{
		if (num % largest_prime_factor == 0)
		{
			num /= largest_prime_factor;
		}
		else
		{
			largest_prime_factor++;
		}
	}
	printf("%ld\n", largest_prime_factor);
	return (0);
}
