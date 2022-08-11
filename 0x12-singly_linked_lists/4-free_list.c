#include "lists.h"

/**
 * free_list - Frees a list_t list
 * @head: Head of linked list
 * Return: 0
 */

void free_list(list_t *head)
{
	list_t *current;
	list_t *nxt;

	current = head;

	while (current != NULL)
	{
		nxt = current->next;
		free(current->str);
		free(current);
		current = nxt;
	}
}
