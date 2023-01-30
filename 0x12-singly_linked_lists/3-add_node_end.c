#include "lists.h"
/**
*_strlen - finds len of string
*@s: pointer to string
*Return: length of string
*/

int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}

/**
*add_node_end - function that adds a new node at the end of a list_t list
*@head:
*@str: item to be added
*Return: the address of the new element, or NULL if it failed
*/


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end, *ptr;

	end = malloc(sizeof(list_t));

	if (end == NULL)
		return (NULL);

	end->str = strdup(str);
	if (end->str == NULL)
	{
		free(end);
		return (NULL);
	}
	end->len = strlen(str);
	end->next = NULL;

	if (*head == NULL)
	{
		*head = end;
		return (end);
	}

	ptr = *head;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = end;
	return (end);
}
