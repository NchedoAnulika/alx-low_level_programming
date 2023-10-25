#include "main.h"
#include <string.h>
/**
 * is_palindrome_recursive - Recursively checks if a string is a palindrome.
 * @s: The string to check.
 * @start: The starting index.
 * @end: The ending index.
 * Return: 1 if palindrome, 0 otherwise.
 */
int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	return ((s[start] != s[end]) ? 0 : is_palindrome_recursive
		(s, start + 1, end - 1));
}
/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if s is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int length = strlen(s);

	return (is_palindrome_recursive(s, 0, length - 1));
}
