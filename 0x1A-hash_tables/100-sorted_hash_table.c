#include "hash_tables.h"

/**
 * shash_table_create - creates the hash table of size 'size'
 * @size: size of new table
 * Return: new table or NULL
*/
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int idx;
	shash_table_t *table = NULL;

	if (size < 1)
		return (NULL);
	table = malloc(sizeof(shash_table_t));

	if (table == NULL)
		return (NULL);
	table->array = malloc(sizeof(shash_table_t *) * size);

	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	for (idx = 0; idx < size; idx++)
		table->array[idx] = NULL;
	table->size = size;
	table->shead = NULL;
	table->stail = NULL;
	return (table);
}

/**
 * new_node_t - creates new shash_node_t
 * @key: key string
 * @value: value of key
 * Return: new shash_node_t
*/
shash_node_t *new_node_t(const char *key, char *value)
{
	shash_node_t *new = malloc(sizeof(shash_node_t));

	if (new == NULL)
	{
		free(value);
		return (NULL);
	}
	new->key = strdup(key);

	if (new->key == NULL)
	{
		free(value);
		free(new);
		return (NULL);
	}
	new->value = value;
	new->snext = NULL;
	new->sprev = NULL;

	return (new);
}

/**
 * set_ord_list - sets elements at the ordered list
 * @ht: table
 * @key: key
 * @node_t: new node
*/

void set_ord_list(shash_table_t *ht, shash_node_t *node_t, const char *key)
{
	shash_node_t *temp;
	/*Add at front of the sorted doubly-linked list*/
	if (ht->shead == NULL)
	{
		ht->shead = node_t;
		ht->stail = node_t;
	}
	else if (strcmp(key, ht->shead->key) < 0)
	{
		node_t->snext = ht->shead;
		ht->shead->sprev = node_t;
		ht->shead = node_t;
	}
	else
	{
		temp = ht->shead;
		while (temp->snext != NULL && strcmp(key, temp->snext->key) > 0)
			temp = temp->snext;

		node_t->snext = temp->snext;
		if (temp->snext != NULL)
			temp->snext->sprev = node_t;
		else
			ht->stail = node_t;
		node_t->sprev = temp;
		temp->snext = node_t;
	}
}
/**
 * shash_table_set - place element in the table
 * @key: string to generate the key
 * @value: value of key
 * @ht: pointer to the table
 * Return: 1 or 0 (failure)
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	char *dup_val;
	shash_node_t *curr_node, *new_node;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	dup_val = strdup(value);

	if (dup_val == NULL)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);

	curr_node = ht->shead;
	while (curr_node != NULL)
	{
		if (strcmp(curr_node->key, key) == 0)
		{
			free(curr_node->value);
			curr_node->value = dup_val;
			return (1);
		}
		curr_node = curr_node->next;
	}
	new_node = new_node_t(key, dup_val);

	if (new_node == NULL)
		return (0);
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;

	set_ord_list(ht, new_node, key);
	return (1);
}

/**
*shash_table_get - a function that adds an element to the hash table
*@ht: is the hash table you want to look into
*@key: is the key you are looking for
*Return: the value associated with the element,
*or NULL if key couldn’t be found
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int idx;
	shash_node_t *temp;

	/*Check for Null pointers*/
	if (!ht || !key || *key == '\0')
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);

	if (idx >= ht->size)
		return (NULL);
	temp = ht->shead;

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}

/**
 * shash_table_print - print the hash table
 * using the sorted linked list
 * @ht: pointer to table
 * Return: void
*/
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp;

	if (ht == NULL)
		return;

	temp = ht->shead;
	printf("{");
	while (temp != NULL)
	{
		printf("'%s': '%s'", temp->key, temp->value);
		temp = temp->snext;
		if (temp != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - print the hash table
 * using the sorted linked list in reverse order
 * @ht: pointer to table
 * Return: void
*/
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp;

	if (ht == NULL)
		return;

	temp = ht->stail;
	printf("{");
	while (temp != NULL)
	{
		printf("'%s': '%s'", temp->key, temp->value);
		temp = temp->sprev;
		if (temp != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - frees table
 * @ht: table pointer
*/
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *start = ht;
	shash_node_t *temp, *ptr;

	if (ht == NULL)
		return;

	temp = ht->shead;
	while (temp)
	{
		ptr = temp->snext;
		free(temp->key);
		free(temp->value);
		free(temp);
		temp = ptr;
	}

	free(start->array);
	free(start);
}
