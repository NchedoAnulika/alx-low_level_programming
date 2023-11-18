#include "lists.h"
/**
 * list_len - Returns the number of elements in a linked list.
 * @h: Pointer to the head of the linked list (list_t).
 * Return: Number of elements in the linked list.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}