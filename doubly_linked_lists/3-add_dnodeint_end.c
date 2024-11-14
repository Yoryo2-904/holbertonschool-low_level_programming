#include "lists.h"

/**
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = NULL;
	dlistint_t *temp = NULL;

	newNode = (dlistint_t *) malloc((sizeof(dlistint_t)));

	if (newNode == NULL)
		return (newNode);

	newNode->n = (int) n;
	newNode->next = NULL;
	newNode->prev = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		newNode->prev = NULL;
		return (newNode);
	}

	temp = *head;

	while (temp->next)
		temp = temp->next;
	temp->next = newNode;
	newNode->prev = temp;
	return (newNode);
}
