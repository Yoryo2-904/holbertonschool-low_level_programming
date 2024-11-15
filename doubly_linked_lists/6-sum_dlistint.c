#include "lists.h"
/**
 * sum_dlistint - sum the int store in evry node
 * @head: the reference to start
 *
 * Return: the sume of the ints store in the list
 */
int sum_dlistint(dlistint_t *head)
{
	int index = 0, result = 0;
	dlistint_t *temp = head;

	while (temp)
	{
		result += temp->n;
		temp = temp->next;
		index++;
	}

	return (result);
}
