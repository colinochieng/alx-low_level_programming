#include "lists.h"

/**
*pop_listint - deletes the head node of a listint_t linked list
*@head: pointer to head to be removed
*Return: the head node’s data (n) or 
*if the linked list is empty return 0
*/

int pop_listint(listint_t **head)
{
	listint_t *traverse;
	int num;

	if (*head == NULL)
		return (0);

	traverse = (*head)->next;
	num = (*head)->n;

	free(*head);
	*head = traverse;

	return (n);
}

	
