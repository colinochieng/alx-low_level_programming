#include "lists.h"

/**
*list_len - function prints number of elements in a linked list_t list
*@h: pointer to a struct to make a linked list
*Return: returns the number of elements in a linked list_t list(i)
*/

size_t list_len(const list_t *h)
{
	size_t i = 0;
	list_t *ptr;

	ptr = (list_t *) h;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		i++;
	}

	return (i);
}
