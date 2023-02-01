#include "lists.h"

/**
*free_listint -  function that frees a listint_t list
*@head: pointer to list template to be freed
*Return: void
*/

void free_listint(listint_t *head)
{
listint_t *temp;

temp = head;
while (temp != NULL)
{
temp = temp->next;
free(temp);
}
}
