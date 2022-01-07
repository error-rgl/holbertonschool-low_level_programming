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
	dlistint_t *new = NULL;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	node->n = n;
	node->next = *head;
	node->prev = NULL;

	if (*head)
		(*head)->prev = new;

	*head = new;
	return (new);
}
