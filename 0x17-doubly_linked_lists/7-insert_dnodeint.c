#include "lists.h"

/**
*insert_dnodeint_at_index - a function that inserts
*a new node at a given position
*@h: pointer to head of list
*@idx: the index of the list where
*the new node should be added. Index starts at 0
*@n: integer for the new node
*Return: the address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr = *h;
	dlistint_t *temp2, *temp;

	if (idx == 0)
		return (add_dnodeint(h, n));
	
	while (idx != 1 && ptr != NULL)
	{
		ptr = ptr->next;
		idx--;
	}

	if (idx != 1)
		return (NULL);

	if (ptr->next == NULL)
		return (add_dnodeint_end(h, n));

	else
	{
		temp = malloc(sizeof(dlistint_t));
		temp->n = n;
		temp2 = ptr->next;
		ptr->next = temp;
		temp2->prev = temp;
		temp->next = temp2;
		temp->prev = ptr;
	}

	return (*h);
}
