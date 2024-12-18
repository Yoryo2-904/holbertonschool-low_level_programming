#include "lists.h"

/**
 * print_list - prints the desite list
 * @h: the list to be printed
 *
 * Return: the amount of elements in list
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;
	list_t *temp = (list_t *) h;

	for (i = 0; temp; i++, temp = temp->next)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
			continue;
		}
		printf("[%d] %s\n", temp->len, temp->str);
	}
	return (i);
}
