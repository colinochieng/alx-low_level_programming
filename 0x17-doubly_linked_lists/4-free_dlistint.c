#include "lists.h"

/**
*free_dlistint - frees list dlistint_t
*@head: start of list dlistint_t
*Return: void
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;

	while (ptr)
	{
		ptr = ptr->next;
		free(ptr->prev);
	}
	free(ptr);
}
