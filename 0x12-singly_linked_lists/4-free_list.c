#include "lists.h"
/**
 * free_list - Frees a list_t list.
 * @head: Pointer to the head of the linked list (list_t).
 */
void free_list(list_t *head)
{
	list_t *current;

	if (head == NULL)
	{
		return;
	}

	while (head->next != NULL)
	{
		current = head->next;
		free(head->str);
		free(head);
		head = current;
	}
	free(head->str);
	free(head);
}
