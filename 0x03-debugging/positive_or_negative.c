#include <stdio.h>
#include "main.h"
/**
 * positive_or_negative - Determine if an integer is positive,
 * zero, or negative and print a message accordingly.
 * @i: The integer to be evaluated
 *
 * Description: This function takes an integer 'i' as its parameter and prints
 * a message indicating whether it is positive, zero, or negative.
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
}
