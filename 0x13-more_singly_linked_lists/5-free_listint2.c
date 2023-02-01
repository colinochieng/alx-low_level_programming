#include "lists.h"

/**
*free_listint2 - a function that frees a listint_t list
*@head: pointer to list template
*function sets the head to NULL
*Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *ptr, *h;

	if (head == NULL)
		return;

	h = *head;

	while (h != NULL)
	{
		ptr = h;
		h = ptr->next;
		free(ptr);
	}

	*head = NULL;

}
