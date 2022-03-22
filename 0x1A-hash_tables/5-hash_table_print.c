#include "hash_tables.h"

/**
 * hash_table_print - prints the keys and values of the hash table
 *
 * @ht: pointer to the hash table
 * Return: no return
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	char *check;
	hash_node_t *temp;

	if (ht == NULL)
		return;
	printf("{");
	check = "";

	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			printf("%s'%s': '%s'", check, temp->key, temp->value);
			check = ", ";
			temp = temp->next;
		}
	}
	printf("}\n");
}
