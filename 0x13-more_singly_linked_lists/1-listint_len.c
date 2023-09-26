#include "lists.h"

/**
 * listint_len - this returns number of element in the linked list
 * @h: linked list of type listint_t to travers
 * Return: number of nodes
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
