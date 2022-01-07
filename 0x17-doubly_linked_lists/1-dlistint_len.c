#include "lists.h"

/**
 * dlistint_len - returns the number of elements in
 * a double linked list
 *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes;

	if (!h)
		return (0);

	for (nodes = 0; h; nodes++)
	{
		h = h->next;
	}
	return (nodes);
}