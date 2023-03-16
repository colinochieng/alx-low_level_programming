#include "lists.h"

/**
* add_dnodeint_end -  adds a new node
* at the end of a dlistint_t list
*@head: pointer to dlistint_t list
*@n: new element
* Return: the address of the new element
*or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;

	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;

	if ((*head) == NULL)
	{
		ptr->next = NULL;
		ptr->prev = NULL;
		*head = ptr;
		return (*head);
	}

	while (temp->next != NULL)
	temp = temp->next;

	temp->next = ptr;
	ptr->prev = temp;

	return (*head);
}
