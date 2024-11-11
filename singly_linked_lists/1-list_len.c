#include "lists.h"

/**
 * list_len - counts the length(byte) of a list
 * @h: the list to be count
 *
 * Return: the length of the desire list(bytes)
 */
size_t list_len(const list_t *h)
{
	int i = 0;
	list_t *temp = (list_t *) h;

	while (temp)
	{
		temp = temp->next;
		i++;
	}

	return (i);
}
