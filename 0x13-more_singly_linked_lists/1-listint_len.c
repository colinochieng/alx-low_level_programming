#include "lists.h"

/**
*listint_len - checks the number of elements in a linked listint_t list
*@h: pointer to a struct template
*Return: number of elements in a linked listint_t list
*/

size_t listint_len(const listint_t *h)
{
	size_t i = 0;
	listint_t *print = (listint_t *) h;

	while (print != NULL)
	{
		print = print->next;
		i++;
	}

	return (i);
}
