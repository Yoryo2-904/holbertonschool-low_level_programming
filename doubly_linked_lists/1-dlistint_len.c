#include "lists.h"

/**
 *
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;
	dlistint_t *temp = (dlistint_t *)h;

	while (temp)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
