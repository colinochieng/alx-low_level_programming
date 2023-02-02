#include "lists.h"

/**
*sum_listint - find the sum of all the data (n) of a listint_t linked list
*@head: pointer listint_t linked list
* Return: the sum
*/

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *traverse;

	traverse = head;

	while (traverse != NULL)
	{
		sum += traverse->n;
		traverse = traverse->next;
	}

	return (sum);
}
