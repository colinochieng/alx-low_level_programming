#include "lists.h"

/**
*insert_nodeint_at_index - inserts a new node at a given position
*@head: pointer to a list template
*@idx: is the index of the list where the new node should be added
*@n: interger
*Returns: the address of the new node, or NULL if it failed
*if it is not possible to add the new node at index idx
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *traverse, *new_index;
	unsigned int i = 0;

	new_index = (listint_t *) malloc(sizeof(listint_t));

	if (new_index == NULL)
		return (NULL);

	new_index->n = n;
	new_index->next = NULL;
	traverse = *head;

	while (traverse != NULL)
	{
		if (i == idx)
		{
			new_index->next = traverse->next;
			traverse->next = new_index;
			return (new_index);
		}

		i++;
		traverse = traverse->next;
	}
	return (new_index);
}
