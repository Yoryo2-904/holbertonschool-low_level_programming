#include "lists.h"

/**
 * get_dnodeint_at_index - goes through the list until index's node
 * @head: the reference to go through the list
 * @index: the index to move on
 *
 * Return: the index's node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp = head;

	while (i < index && temp->next)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL && i > index)
		return (NULL);

	return (temp);
}
