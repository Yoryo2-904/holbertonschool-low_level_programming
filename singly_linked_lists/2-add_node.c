#include "lists.h"

/**
 *
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = NULL;

	newNode = (list_t *) malloc(sizeof(list_t));

	if (newNode == NULL)
		return (&newNode);

	newNode->str = strdup((char *) str);
	newNode->len = strlen((char *) str);
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
