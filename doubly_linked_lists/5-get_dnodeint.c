#include "lists.h"

/**
 * list_len - measure the length of a list
 * @h: the list's reference
 *
 * Return: the length of the list
 */
unsigned int list_len(const dlistint_t *h)
{
	unsigned int i = 0;
	dlistint_t *temp = (dlistint *) h;

	while (temp)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
/**
 * get_dnodeint_at_index - goes through the list until index's node
 * @head: the reference to go through the list
 * @index: the index to move on
 *
 * Return: the index's node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int list_length = list_len(head)
	unsigned int i = 0;
	dlistint_t *temp = head;

	if (index > list_length)
		return (NULL);

	while (i < index && temp->next)
	{
		temp = temp->next;
		i++;
	}

	return (temp);
}
