#include <stdio.h>
#include "lists.h"

/**
 * print_list - this prints all elements in the linked list
 * @h: the head pointer
 *
 * Return: prints the number of nodes
 *
 */

size_t print_list(const list_t *head)
{
	size_t s = 0;

	while (head)
	{
		if (!head->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", head->len, head->str);
		head = head->next;
		s++;
	}
	return (s);
}
