#include "lists.h"

/**
 * _dlistint_len - counts the length of a list
 * @h: the list to be measure
 *
 * Return: the length of the list
 */
unsigned int _dlistint_len(const dlistint_t *h)
{
	dlistint_t *temp = (dlistint_t *) h;
	unsigned int i = 0;

	while (temp)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}

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
