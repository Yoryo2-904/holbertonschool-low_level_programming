#include "lists.h"

/**
 *
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;
	dlistint_t *temp = (dlistint_t *) h;

	for (i = 0; temp; i++, temp = temp->next)
	{
			printf("%d\n", temp->n);
	}
	return (i);
}
