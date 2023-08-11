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
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
