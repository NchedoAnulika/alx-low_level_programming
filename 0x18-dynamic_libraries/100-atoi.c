#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the input string.
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int i, d, n, length, f, num;

	i = 0;
	d = 0;
	n = 0;
	length = 0;
	f = 0;
	num = 0;

	while (s[length] != '\0')
		length++;

	while (i < length && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			num = s[i] - '0';
			if (d % 2)
				num = -num;
			n = n * 10 + num;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}
