#include "lists.h"

/**
 * _strlen - counts the length of a string(characters)
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
		return (newNode);

	newNode->str = strdup((char *) str);
	newNode->len = _strlen((char *) str);
	newNode->next = NULL;

	if (*head != NULL)
		newNode->next = *head;

	*head  = newNode;

	return (newNode);
}
