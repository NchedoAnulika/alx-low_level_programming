#include <stdio.h>
#include <stdlib.h>
/**
 * print_opcodes - Prints opcodes from
 * an array in hexadecimal format.
 * @a: Pointer to the array of opcodes.
 * @n: The number of opcodes to print.
 *
 * Return: void
 */
void print_opcodes(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", a[i]);
		if (i < n - 1)
		{
			printf(" ");
		}
		printf("\n");
	}
}
/**
 * main - Program to print opcodes of its own main function.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 Always
 */
int main(int argc, char *argv[])
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *) &main, n);
	return (0);
}
