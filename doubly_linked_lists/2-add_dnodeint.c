#include "lists.h"

/**
 *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = NULL;

	newNode = (dlistint_t *) malloc((sizeof(dlistint_t)));

	if (newNode == NULL)
		return (newNode);

	newNode->n = (int) n;
	newNode->next = *head;
	newNode->prev = NULL;

	if (*head)
		(*head)->prev = newNode;

	*head = newNode;
	return (newNode);
}
