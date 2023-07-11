#include "search_algos.h"

/**
 * jump_list - function that searches for a value in
 * a sorted list of integers using the Jump search algorithm
 * @list: is a pointer to the head of the list to search in
 * @size: is the number of nodes in list
 * @value: is the value to search for
 * Return: pointer to the first node value is located or NULL
*/
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t curr = 0;
	size_t step = sqrt(size);
	listint_t *prev, *trav = list;

	curr = step;

	while (curr < size && trav->n < value)
	{
		prev = trav;

		while (trav->index < curr && trav->next)
			trav = trav->next;
		printf("Value checked at index [%ld] = [%d]\n", trav->index, trav->n);
		if (trav->next)
			curr += step;
		else
			break;
	}
	curr = trav->index - 4;
	printf("Value found between indexes [%ld] and [%ld]\n", curr, (curr + 4));
	curr -= step;

	while (prev->n < trav->n)
	{
		printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
		curr++;
	}
	return (NULL);
}
