#include "hash_tables.h"

/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}


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
		table->array[i] = NULL;
	table->size = size;
	table->shead = NULL;
	table->stail = NULL;
	return (table);
}

/**
 * key_gen - generates the index
 * @key: string to be used for index generation
 * Return: index
*/
unsigned long int key_gen(const char *str, shash_table_t *ht)
{
	unsigned long int digest = hash_djb2(str);
	return (digest % ht->size);
}

/**
 * new_node_t - creates new shash_node_t
 * @key: key string
 * @value: value of key
 * Return: new shash_node_t
*/
shash_node_t *new_node_t(char *key, char *value)
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
 * @node_t: new node
*/

void set_ord_list(shash_table_t *ht, shash_node_t *node_t)
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

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	dup_val = strdup(value);

	if (dup_val == NULL)
		return (0);
	curr_node = ht->array[key_gen(key, ht)];
	while(curr_node != NULL)
	{
		if (strcmp(curr_node->key, key) == 0)
		{
			free(curr_node->value);
			curr_node->value = dup_val;
			return (1);
		}
	}
	new_node = new_node_t(key, dup_val);

	if (new_node == NULL)
		return (0);
	new_node->next = ht->array[key_gen(key, ht)];
	ht->array[key_gen(key, ht)] = new_node;

	set_ord_list(ht, new_node);
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
	hash_node_t *temp;

	/*Check for Null pointers*/
	if (!ht || !key || *key == '\0')
		return (NULL);
	temp = ht->array[key_gen(key, ht)];

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
