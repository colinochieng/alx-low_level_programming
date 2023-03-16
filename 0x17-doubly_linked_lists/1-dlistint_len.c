#include "lists.h"

/**
 * dlistint_len -  finds  the number of elements
 *in a linked dlistint_t list
 *@h: pointer to dlistint_t list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *ptr = (dlistint_t *) h;
	size_t i = 0;

	while (ptr != NULL)
	{
		i++;
		ptr = ptr->next;
	}
	return (i);
}
