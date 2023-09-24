#include <stdio.h>
#include "lists.h"

/**
 * print_list - this prints all elements in the linked list
 * @h: the head pointer
 *
 * Return: prints the number of nodes
 *
 */

size_t print_list(const list_t *h)
{
	size_t c = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		c++;
	}
	return (c);
}
