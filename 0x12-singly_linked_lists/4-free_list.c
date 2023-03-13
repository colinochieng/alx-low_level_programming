#include "lists.h"

/**
*free_list - a function that frees a list_t list
*@head: pointer to a list
*Return: void
*/
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		if (tmp->str)
			free(tmp->str);
		free(tmp);
	}
}

