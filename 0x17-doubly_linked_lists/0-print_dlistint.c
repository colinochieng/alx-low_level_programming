#include "lists.h"

/**
 * print_dlistint -  prints all the elements of a dlistint_t list
 *@h: pointer to dlistint_t list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *ptr = (dlistint_t *) h;
	size_t i = 0;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		i++;
		ptr = ptr->next;
	}
	return (i);
}
