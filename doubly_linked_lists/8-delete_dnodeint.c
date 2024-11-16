#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node according to the index
 * @head: the reference to the list
 * @index: the index
 *
 * Return: 1 on succes -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp = *head;

	while (i < index)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
		return (-1);

	free(temp);
	return (1);
}
