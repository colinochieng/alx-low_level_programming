#include "lists.h"

/**
*print_listint - function that prints all the elements of a listint_t list.
*@h: pointer to listint_t
*Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	listint_t *print;

	print = (listint_t *) h;

/*Traversing to print all data in the list*/
	while (print != NULL)
	{
		printf("%d\n", print->n);
		print = print->next;
		i++;
	}
	return (i);
}
