#include "lists.h"

/**
 * add_dnodeint -  adds a new node
 *at the beginning of a dlistint_t list
 *@h: pointer to dlistint_t list
 *@n: new element
 * Return: the address of the new element
 *or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr = malloc(sizeof(dlistint_t));

	if (ptr == NULL)
	return (NULL);
	ptr->n = n;

	if ((*head) == NULL)
	{
		ptr->next = NULL;
		ptr->prev = NULL;
		*head = ptr;
		return (*head);
	}
	ptr->next = (*head);
	ptr->prev = NULL;
	(*head)->prev = ptr;
	(*head) = ptr;

	return (*head);
}
