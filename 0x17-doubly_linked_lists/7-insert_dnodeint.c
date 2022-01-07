#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp;
	dlistint_t *new_nd;
	unsigned int i;

	if (!h)
		return (NULL);
	temp = *h;
	if (temp)
		for (i = 0; temp->next != NULL && i <= idx; i++)
			temp = temp->next;

	new_nd = malloc(sizeof(dlistint_t));
	if (new_nd == NULL)
		return (NULL);

	new_nd->n = n;
	new_nd->prev = temp->prev;
	new_nd->next = temp;

	temp->prev = new_nd;
	temp->next->prev = new_nd;

	return (new_nd);
}
