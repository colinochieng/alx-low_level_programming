#include "hash_tables.h"

/**
*hash_table_get - a function that adds an element to the hash table
*@ht: is the hash table you want to look into
*@key: is the key you are looking for
*Return: the value associated with the element,
*or NULL if key couldn’t be found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp_code;

	/*Check for Null pointers*/
	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);


	/* Get the index for the key */
	index = key_index((const unsigned char *) key, ht->size);

	/* Check if the key already exists in the hash table */
	temp_code = ht->array[index];
	while (temp_code != NULL)
	{
		if (strcmp(temp_code->key, key) == 0)
		return (temp_code->value);

		temp_code = temp_code->next;
	}
	return (NULL);
}
