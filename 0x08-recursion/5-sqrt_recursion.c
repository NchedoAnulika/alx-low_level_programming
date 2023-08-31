#include "main.h"
/**
 * calculate_sqrt - Recursively calculates the square root of n.
 * @n: Number to find square root of.
 * @guess: Current guess for square root.
 *
 * Return: Square root of n, or -1 if no natural square root.
 */
int calculate_sqrt(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	return ((guess * guess > n) ? -1 : calculate_sqrt(n, guess + 1));
}
/**
 * _sqrt_recursion - Returns the square root of n or -1.
 * @n: Number to find square root of.
 *
 * Return: Square root of n or -1 if not possible.
 */
int _sqrt_recursion(int n)
{
	return ((n < 0) ? -1 : calculate_sqrt(n, 0));
}
