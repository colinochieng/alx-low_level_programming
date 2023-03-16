#include "lists.h"

/**
*get_dnodeint_at_index - function that returns
*the nth node of a dlistint_t linked list.
*@head: Poointre to start of list
*@index: is the index of the node starting from 0
*Return: if the node does not exist, return NULL
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;
	size_t i = 0;

	while (i != index)
	{
		ptr = ptr->next;
		i++;
	}
	if (i != index)
		return (NULL);

	return (ptr);
}
