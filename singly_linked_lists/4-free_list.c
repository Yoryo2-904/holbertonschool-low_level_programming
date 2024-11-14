#include "lists.h"

/**
 * free_list - free the desire list
 * @head: the list to be free
 *
 * Return: void
 */
void free_list(list_t *head)
{
	while (head)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
