#include "lists.h"

/**
 *
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode = NULL;
	list_t *temp = NULL;

	newNode = (list_t *) malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup((char *) str);

	if (strdup((char *) str) == NULL)
	{
		free ((char *)str);
		return (NULL);
	}

	newNode->len = strlen((char *) str);
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;

	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = newNode;

	return (newNode);
}

