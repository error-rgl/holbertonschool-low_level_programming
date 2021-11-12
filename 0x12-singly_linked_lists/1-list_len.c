#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: singly linked list.
 * Return: number of elements in the linked list.
 */
size_t print_list(const list_t *h)
{
	size_t length;

	length = 0;
	while (h != NULL)
	{
		h = h->next;
		length++;
	}
	return (length);
}
