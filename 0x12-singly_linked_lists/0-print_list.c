#include "lists.h"
/**
 * print_list - Prints the content of a
 * linked list and returns the number of nodes.
 * @h: Pointer to the head of the linked list (list_t).
 * Return: Number of nodes in the linked list.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	for (; h != NULL; h = h->next, count++)
	{
		if (h->str != NULL)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
	}
	return (count);
}
