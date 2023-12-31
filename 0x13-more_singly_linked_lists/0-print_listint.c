#include "lists.h"

/**
 * print_listint - This prints all elements of tthe linked list
 * @h: the linked list of listint_t to be printed
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->m);
		num++;
		h = h->next;
	}
	return (num);
}

