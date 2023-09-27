#include "lists.h"

/**
 * add_nodeint - This adda anew node to the beginning of a linked list
 * @head: header pointer to the first node
 * @n: the data to be insert in new node
 *
 * Return: pointer to new node if successful and NULL if fail
 */

listint_t *add_nodeint(listint **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
