#include "lists.h"

/**
 * free_dlistint - free the desire list
 * @head: the list to be free
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	while (head)
	{
		free(head);
		head = head->next;
	}
}
