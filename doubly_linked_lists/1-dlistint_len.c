#include "lists.h"

/**
 * dlistint_len - counts the length of a list
 * @h: the list to be measure
 *
 * Return: the length of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;
	dlistint_t *temp = (dlistint_t *)h;

	while (temp)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
