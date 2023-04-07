#include "hash_tables.h"

/**
*hash_table_delete - function that deletes a hash table.
*@ht: is the hash table
*Return: void
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *curr_node;
	unsigned long int i;

	if (ht == NULL)
		return;

	/* Free each linked list in the array */
	for (i = 0; i < ht->size; i++)
	{
		curr_node = ht->array[i];
		while (curr_node != NULL)
		{
			temp = curr_node->next;
			free(curr_node->key);
			free(curr_node->value);
			free(curr_node);
			curr_node = temp;
		}
	}

	/* Free the array and the hash table struct */
	free(ht->array);
	free(ht);
}
