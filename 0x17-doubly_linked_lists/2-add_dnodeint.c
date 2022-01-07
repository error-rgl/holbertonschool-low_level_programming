#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * of a dlistint_t list
 * @head: head of the list
 * @n: value of the element
 *
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_nd = NULL;

	if (head == NULL)
		return (NULL);

	new_nd = malloc(sizeof(dlistint_t));
	if (!new_nd)
		return (NULL);

	new_nd->n = n;
	new_nd->next = *head;
	new_nd->prev = NULL;

	if (*head)
		(*head)->prev = new_nd;

	*head = new_nd;
	return (new_nd);
}
