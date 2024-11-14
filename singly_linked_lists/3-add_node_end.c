#include "lists.h"

/**
 * _strlen - counts the length of the string
 * @s: the string to be count
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * add_node_end - creates and adds a node at end of a list
 * @head: the first node of the list
 * @str: the string that will be set in the new node
 *
 * Return: the created node
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
		free(newNode->str);
		return (NULL);
	}
	newNode->len = _strlen((char *) str);
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = newNode;

	return (newNode);
}

