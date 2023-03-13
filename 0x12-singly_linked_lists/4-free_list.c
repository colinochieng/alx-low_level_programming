#include "lists.h"

/**
*free_list - a function that frees a list_t list
*@head: pointer to a list
*Return: void
*/
void free_list(list_t *head)
{
        list_t *ptr, *temp;
        
        ptr = head;
        while (ptr->next != NULL)
        {
                temp = ptr;
                ptr = ptr->next;
                free(temp->str);
                free(temp);
        }
        head = NULL;
}
