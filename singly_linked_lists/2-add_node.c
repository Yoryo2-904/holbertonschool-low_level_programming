#include "lists.h"

/**
 * add_node - creates and adds a node
 * @head: the first node of the list
 * @str: the string that will be set in the new node
 *
 * Return: the already create node
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
