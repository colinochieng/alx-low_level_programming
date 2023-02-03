#include "lists.h"

/**
*find_listint_loop - locates the loop in a linked list
*@head: pointer a list template
*Return: address of the node where the loop starts, or NULL if there is no loop
*/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *traverse, *locate;

	if (head == NULL || head->next == NULL)
		return (NULL);

	locate = head->next;
	traverse = (head->next)->next;

	while (search)
	{
		if (locate == search)
		{
			locate = head;

			do {
				locate = locate->next;
				traverse = traverse->next;
			} while (locate != traverse);

			return (locate);
		}

		traverse = (traverse->next)->next
		locate = locate->next;
	}

	return (NULL);
}
