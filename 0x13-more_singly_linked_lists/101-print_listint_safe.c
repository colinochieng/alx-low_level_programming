#include "lists.h"

/**
*print_listint_safe -  prints a listint_t linked list
*@head: pointer to list template
*This function can print lists with a loop
*You should go through the list only once
*Return: the number of nodes in the list
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t i, j;
	listint_t *traverse, *check;

	traverse = (listint_t *)head;

	i = 0;
	while (traverse != NULL)
	{
		printf("[%p] %d\n", (void *) traverse->next, traverse->n);
		i++;
		traverse = traverse->next;

		j = 0;
		check = (listint_t *)head;

		while (j < i)
		{
			if (check == traverse)
			{
				printf("-> [%p] %d\n", (void *)traverse->next, traverse->n);
				return (i);
			}

			check = check->next;
			j++;
		}

		if (!head)
			exit(98);

	}


	return (i);
}
