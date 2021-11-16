#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked list.
 * @h: head of a list.
 *
 * Return: number of nodos.
 */
size_t listint_len(const listint_t *h)
{
	size_t num_nodes = 0;

	if (h != NULL)
	{
		h = h->next;
		num_nodes++;
	}
	return (num_nodes);
}
