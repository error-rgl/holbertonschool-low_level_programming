#include "lists.h"
/**
 * pop_listint -  a function that deletes the head node of a
 * listint_t linked list, and returns the head nodes data (n).
 * @head: pointer to the head of the list.
 *
 * Return: the head nodes data (n). If the linked
 * list is empty return 0
 */
int pop_listint(listint_t **head)
{
	int node_data = 0;
	listint_t *temp;

	if (*head)
	{
		node_data = (*head)->n;
		temp = (*head)->next;
		free(*head);
		(*head) = temp;
	}
	return (node_data);
}
