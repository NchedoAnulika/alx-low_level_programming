#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This is the main function that prints a message.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	for (number = 0; number < 16; number++)
	{
		if (number < 10)
		{
			putchar(number + '0');
		}
		else
		{
			putchar(number - 10 + 'a');
		}
	}
	putchar('\n');
	return (0);
}
