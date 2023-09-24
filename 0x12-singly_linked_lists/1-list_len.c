#include <stdlib.h>
#include "lists.h"

/**
 * list_len - will return the number of elements in the linked list
 * @h: the header pointer
 *
 * Return: returns the number of elements
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
