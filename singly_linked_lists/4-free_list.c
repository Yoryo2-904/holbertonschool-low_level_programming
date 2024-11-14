#include "lists.h"

/**
 *
 *
 */
void free_list(list_t *head)
{
	list_t *temp = NULL; /*head = NULL*/

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp; 
	}
}
