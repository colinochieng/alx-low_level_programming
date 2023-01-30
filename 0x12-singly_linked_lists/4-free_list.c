#include "lists.h"

/**
*free_list - a function that frees a list_t list
*@head: pointer to a list
*Return: void
*/
void free_list(list_t *head)
{
	list_t *temp;
	list_t *ptr = head;
	while (ptr != NULL)
	{
		temp = ptr->next;
		free(ptr->str);
		free(ptr);
		ptr = temp;
	}
}
