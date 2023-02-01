#include "list.h"

/**
*a function that frees a listint_t list
*function sets the head to NULL
*Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	while (*head != NULL)
	{
		ptr = *head;
		*head = *head->next;
		free(ptr);
	}

	head = NULL;
}
