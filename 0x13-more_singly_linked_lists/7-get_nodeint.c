#include "lists.h"

/**
*get_nodeint_at_index - finds nth node in a list
*@head: pointer to list template
*@index: position of the nth node
*Return:  returns the nth node of a listint_t linked list or
*if the node does not exist, return NULL
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *traverse;
	unsigned int i = 0;

	traverse = head;

	while (traverse != NULL)
	{
		if (i == index)
			return (traverse);
		i++;
		traverse = traverse->next;
	}

	return (traverse);
}
