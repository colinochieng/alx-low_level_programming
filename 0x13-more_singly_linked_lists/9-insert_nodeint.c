#include "lists.h"

/**
*insert_nodeint_at_index - inserts a new node at a given position
*@head: pointer to a list template
*@idx: is the index of the list where the new node should be added
*@n: interger
*Return: the address of the new node, or NULL if it failed
*if it is not possible to add the new node at index idx
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
        unsigned int i = idx - 1;
        listint_t *traverse, *insertint;

        insertint = (listint_t *) malloc(sizeof(listint_t));

        if (insertint == NULL)
                return (NULL);

        insertint->n = n;
        insertint->next = NULL;

        if (*head == NULL)
                return (NULL);
        
        if (idx == 0)
        {
                insertint = *head;
                *head = insertint;
                return (insertint);
        }

        else
        {
                traverse = *head;

                while (i--)
                {
                        if (traverse == NULL)
                        {
                                free(insertint);
                                return (NULL);
                        }
                        traverse = traverse->next;
                }

                insertint->next = traverse->next;
                traverse->next = insertint;
        }

        return (insertint);
}
