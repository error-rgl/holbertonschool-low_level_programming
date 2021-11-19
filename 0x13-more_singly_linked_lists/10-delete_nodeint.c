#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * of a linked list.
 * @head: head of a list.
 * @index: index of the list where the node is
 * deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node_prev = NULL, *node_nex;
	unsigned int count;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		node_nex = *head;
		*head = node_nex->next;
		free(node_nex);
		return (1);
	}
	else
	{
		node_prev = *head;
		for (count = 0; count < (index - 1); count++)
		{
			node_prev = node_prev->next;
			if (!node_prev)
				return (-1);
		}
		node_nex = node_prev->next;
		node_prev->next = node_nex->next;
		free(node_nex);
	}
	return (1);
}
