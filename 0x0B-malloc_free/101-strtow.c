#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int word_len(char *str);
int word_count(char *str);
char **strtow(char *str);
/**
 * word_len - Locates the word at the end of the first word
 *		within a string.
 * @str: The string to be searched.
 *
 * Return: The word at the end of the first word pointed by the str.
 */
int word_len(char *str)
{
	int first = 0, len = 0;

	while (*(str + first) && *(str + first) != ' ')
	{
		len++;
		first++;
	}
	return (len);
}
/**
 * word_count - Count the number of words in a string.
 * @str: The string to count words in.
 *
 * Return: The count of words found in the string.
 */
int word_count(char *str)
{
	int first = 0, words = 0, len = 0;

	for (first = 0; *(str + first); first++)
		len++;
	for (first = 0; first < len; first++)
	{
		if (*(str + first) != ' ')
		{
			words++;
			first += word_len(str + first);
		}
	}
	return (words);
}
/**
 * strtow - Split a string into words, separated by spaces.
 * @str: The input string to be split into words.
 *
 * Return: A dynamically allocated array of strings, where each element
 *         contains a word from the input string. The last element is NULL.
 *         Returns NULL if str is NULL or an empty string.
 *         Returns NULL in case of memory allocation failure.
 */
char **strtow(char *str)
{
	char **strings;
	int first = 0, words, w, letters, l;

	if (str == NULL || str[0] == '\0')
	{
		return (NULL);
	}
	words = word_count(str);

	if (words == 0)
		return (NULL);
	strings = malloc(sizeof(char *) * (words + 1));

	if (strings == NULL)
	{
		return (NULL);
	}
	for (w = 0; w < words; w++)
	{
		while (str[first] == ' ')
			first++;

		letters = word_len(str + first);
		strings[w] = malloc(sizeof(char) * (letters + 1));

		if (strings[w] == NULL)
		{
			for (; w >= 0; w--)
				free(strings[w]);
			free(strings);
			return (NULL);
		}
		for (l = 0; l < letters; l++)
			strings[w][l] = str[first++];

		strings[w][l] = '\0';
	}
	strings[w] = NULL;
	return (strings);
}
