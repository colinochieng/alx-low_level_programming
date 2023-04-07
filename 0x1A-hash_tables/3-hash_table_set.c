#include "hash_tables.h"


/**
*hash_table_set - a function that adds an element to the hash table
*@ht: pointer to hash table
*@key: key to generate hash idx
*@value: is the value associated with the key
*value must be duplicated. value can be an empty string
*First checks for empty pointers
*Then computes the key index
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *dup_value;
	hash_node_t *new_node, *temp_node;

	if (ht == NULL || key == NULL || *key == '\0' || value = NULL)
		return (0);
	dup_value = strdup(value);

	if (dup_value == NULL)
		return (0);
	index = key_index((const unsigned char *) key, ht->size);

	temp_node = ht->array[index];
	while (temp_node != NULL)
	{
		if (strcmp(temp_node->key, key) == 0)
		{
			free(temp_node->value);
			temp_node->value = dup_value;
			return (1);
		}
		temp_node = temp_node->next;
	}
	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
	{
		free(dup_value);
		return (0);	
	}
	new_node->key = strdup(key);

	if (new_node->key == NULL)
	{
		free(dup_value);
		free(new_node);
		return (0);
	}
	new_node->value = dup_value;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
