#include "main.h"

/**
 * infinite_add - Adds two numbers.
 * @n1: First number as a string.
 * @n2: Second number as a string.
 * @r: Buffer to store the result.
 * @size_r: Size of the result buffer.
 *
 * Return: Pointer to the result or 0 if result cannot be stored.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0, sum;
	int i = size_r - 2, len1 = 0, len2 = 0;

	while (n1[len1])
		len1++;
	while (n2[len2])
		len2++;

	while (i >= 0 && (len1 > 0 || len2 > 0 || carry))
	{
		if (len1 > 0)
		{
			sum = n1[--len1] - '0';
		}
		if (len2 > 0)
		{
			sum += n2[--len2] - '0';
		}
		sum += carry;

		carry = sum / 10;
		r[i] = (sum % 10) + '0';
		i--;
	}

	if (carry > 0 && i >= 0)
	{
		r[i] = carry + '0';
	}
	else if (carry > 0)
	{
		return (0);
	}

	return (i < 0 ? 0 : r + i + 1);
}
