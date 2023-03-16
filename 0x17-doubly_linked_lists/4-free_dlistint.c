#include "lists.h"

/**
*free_dlistint - frees list dlistint_t
*@head: start of list dlistint_t
*Return: void
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;

	if (ptr != NULL)
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
			free(ptr->prev);
		}
		free(ptr);
	}
}
