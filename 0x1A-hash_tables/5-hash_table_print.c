#include "hash_tables.h"


/**
*hash_table_print - a function that prints a hash table.
*@ht: ht is the hash table
*Prints the key/value in the order that they appear in the array of hash table
*Order: array, list {'key': 'value'}
*If ht is NULL, don’t print anything
*/

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int i;
	int printed = 0;

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		if (temp == NULL)
			continue;

		if (printed)
			printf(", ");
		printf("'%s': '%s'", temp->key, temp->value);
		printed = 1;
		temp = temp->next;

		while (temp != NULL)
		{
			printf(", '%s': '%s'", temp->key, temp->value);
			temp = temp->next;
		}
	}
	printf("}\n");
}
