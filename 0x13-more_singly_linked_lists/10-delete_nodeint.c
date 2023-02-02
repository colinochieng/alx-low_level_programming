#include "lists.h"

/**
*delete_nodeint_at_index -  deletes the node at index
*@head: pointer to list template
*@index: is the index of the node that should be deleted
*Return: 1 if it succeeded, -1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *traverse, *take_value;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		traverse = *head;
		(*head) = (*head)->next;
		free(traverse);
	}

	else
	{
		traverse = (*head);

		while (index--)
		{
			if (traverse->next == NULL)
				return (-1);

			take_value = traverse;
			traverse = traverse->next;
		}

		take_value->next = traverse->next;
		free(traverse);
	}

	return (1);
}
