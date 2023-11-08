#include "function_pointers.h"
/**
 * print_name - Prints a name without modifications.
 * @name: The name to be printed.
 * @f: A function pointer for custom character printing.
 *
 * This function iterates through the characters
 * in the name and prints them as is.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL && f == NULL)
	{
		return;
	}
	f(name);
}
