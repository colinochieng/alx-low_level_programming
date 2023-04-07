#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table with given size.
 * @size: The size of the array in the hash table.
 *
 * Return: Pointer to the newly created hash table or NULL on failure.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i;
	hash_table_t *table = NULL;

	if (size < 1)
		return (NULL);

	table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	/*Allocation of memory for hash_node_t pointers*/
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	table->size = size;
	return (table);
}
