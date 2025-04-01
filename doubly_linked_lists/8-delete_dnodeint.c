#include <stdlib.h>
#include "dlistint.h"

/**
* delete_dnodeint_at_index - Deletes the node
* given index in a dlistint_t list.
* @head: Double pointer to the head of the list.
* @index: Index of the node to delete (starting from 0).
*
* Return: 1 if succeeded, -1 if failed.
*
* Description:
* This function deletes a node at the specified index in a doubly linked list.
* It handles edge cases such as empty lists, invalid indices, and deletions at
* the beginning, middle, or end of the list.
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current;
unsigned int i;
if (head == NULL || *head == NULL)
return (-1);
current = *head;
if (index == 0)
{
*head = current->next;
if (*head != NULL)
(*head)->prev = NULL;
free(current);
return (1);
}
for (i = 0; current != NULL && i < index; i++)
current = current->next;
if (current == NULL)
return (-1);
if (current->prev != NULL)
current->prev->next = current->next;
if (current->next != NULL)
current->next->prev = current->prev;
free(current);
return (1);
}
