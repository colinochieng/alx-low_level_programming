#include "lists.h"

/**
*print_list - function that prints all the elements of a list_t list
*If str is NULL, print [0] (nil)
*@h: pointer to a list in struct
*Return: the number of nodes(i)
*/

size_t print_list(const list_t *h)
{
	size_t i = 0;
	list_t *ptr;

	ptr = (list_t *) h;

	while (ptr != NULL)
	{
		if (ptr->str == NULL && ptr->next != NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", ptr->len, ptr->str);

		ptr = ptr->next;
		i++;
	}

	return (i);
}

