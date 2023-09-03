#include <stdio.h>
#include <stdlib.h>
/**
 * main - Calculates minimum coins for change.
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
	int i;
	int cents;
	int coins[] = {25, 10, 5, 2, 1};
	int num_coins;
	int count;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	num_coins = sizeof(coins) / sizeof(coins[0]);
	count = 0;

	for (i = 0; i < num_coins; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			count++;
		}
	}
	printf("%d\n", count);
	return (0);
}
