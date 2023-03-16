#include "lists.h"

/**
*sum_dlistint - a function that finds
*the sum of all the data (n) of a dlistint_t linked list
*@head: pointer to list
*Return: value of sum
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
