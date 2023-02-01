#include "lists.h"

/**
*add_nodeint_end - that adds a new node at the end of a listint_t list
*@head: pointer to list template
*@n: integer
*Return: the address of the new element, or NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add_end, *traverse;

	add_end = (listint_t *) malloc(sizeof(listint_t));

	if (add_end == NULL)
		return (NULL);

	add_end->n = n;
	add_end->next = NULL;

	if (*head == NULL)
	{
		*head = add_end;
		return (add_end);
	}

	traverse = *head;

	while (traverse->next != NULL)
		traverse = traverse->next;

	traverse->next = add_end;

	return (add_end);
}
