#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of a program.
 * @ac: The argument count.
 * @av: The argument vector (array of strings).
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
	int i;
	char *t;
	int a = 0;
	int len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);


	for (i = 0; i < ac; i++)
	{
		char *arg = av[i];

		while (*arg)
		{
			len++;
			arg++;
		}
		len++;
	}
	t = (char *)malloc(len * sizeof(char));

	if (t == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		char *arg = av[i];

		while (*arg)
		{
			t[a++] = *arg;
			arg++;
		}
		t[a++] = '\n';
	}
	t[a] = '\0';
	return (t);
}
