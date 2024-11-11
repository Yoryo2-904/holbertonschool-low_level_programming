#include "lists.h"

/**
 *
 *
 */
size_t list_len(const list_t *h)
{
	int i = 0;
	list_t *temp = (list_t *) h;

	while (temp)
	{
		temp = temp->next;
		i++;
	}

	return (i);
}
