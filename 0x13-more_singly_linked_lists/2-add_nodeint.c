#include "lists.h"

/**
*add_nodeint - adds a new node at the beginning
*@head: pointer to list template
*@n: interger to be added
*Return: the address of the new element, or NULL if it failed
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add_beginning;

	add_beginning = (listint_t *) malloc(sizeof(listint_t));

	if (add_beginning == NULL)
		return (NULL);

	add_beginning->n = n;

	add_beginning->next = *head;
	*head = add_beginning;

	return (add_beginning);
}
