
#include "hash_tables.h"

/**
 * add_n_hash - adds a node at the beginning of a hash at a given index
 *
 * @head: head of the hash linked list
 * @key: key of the hash
 * @value: value to store
 * Return: head of the hash
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index = 0;
	hash_node_t *new_node = NULL, *list_node = NULL;

	/*check key*/
	if (!key || key == NULL)
		return (0);
	/*if the table doesn't exist or is empty*/
	if (ht == NULL || ht->size == 0)
		return (0);
	index = key_index((unsigned const char *) key, ht->size);
	list_node = ht->array[index];
	while (list_node != NULL)
	{
		if (strcmp(list_node->key, key) == 0)
		{
			list_node->value = (char *) value;
			return (1);
		}
		list_node = list_node->next;
	}

	/*create a new node */
	new_node = create_new_node(key, value);
	if (ht->array[index])
		new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
