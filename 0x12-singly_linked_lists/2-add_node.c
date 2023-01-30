#include "lists.h"


/**
*_strlen - finds len of string
*@s: pointer to string
*Return: length of string
*/

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}
/**
*add_node - a function that adds a new node at the beginning of a list_t list.
*@head: pointer to the list to add the new node
*@str: pointer to the string to add at abeginning of list
*Return: the address of the new element, or NULL if it failed
*/


list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return NULL;

	ptr->str = strdup(str);

	if (ptr->str == NULL)
	{
		free(ptr);
		return NULL;
	}
	ptr->len = _strlen(str);
	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
