#include "lists.h"

/**
 * print_dlistint - prints the int of the list and measure the list
 * @h: the list to be print
 *
 * Return: the the length of the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;
	dlistint_t *temp = (dlistint_t *) h;

	for (i = 0; temp; i++, temp = temp->next)
	{
			printf("%d\n", temp->n);
	}
	return (i);
}
