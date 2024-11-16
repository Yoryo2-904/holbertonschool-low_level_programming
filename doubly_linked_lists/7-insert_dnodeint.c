#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node at the desire index
 * @h: the reference
 * @idx: the index to put the new node
 * @n: the int to store in the new node
 *
 * Return: the new node inserted at the desire index in the list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *newNode = NULL;
	dlistint_t *temp = *h;

	newNode = (dlistint_t *) malloc((sizeof(dlistint_t)));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	if (idx == 0)
	{
		newNode->next = temp;
		if (temp)
			temp->prev = newNode;
		*h = newNode;
	}

	while ((i + 1) < idx && temp->next)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
		return (NULL);

	if (temp->next)
		newNode->next = temp->next;
	temp->next = newNode;
	newNode->prev = temp;

	return (newNode);
}
