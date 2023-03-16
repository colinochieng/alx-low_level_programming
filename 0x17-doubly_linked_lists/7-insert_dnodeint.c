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

	while (idx != 0)
	{
		ptr = ptr->next;

		if (ptr == NULL)
			return (NULL);
		idx--;
	}

	if (ptr->next == NULL)
		return (add_dnodeint_end(h, n));

	temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->prev = ptr;
	temp2 = ptr->next;
	temp->next = temp2;
	temp2->prev = temp;
	ptr->next = temp;
	
	return (temp);
}
