#include <stddef.h>
#include "dlistint.h"

/**
* get_dnodeint_at_index - Retrieves the nth node of a dlistint_t linked list.
* @head: Pointer to the head of the doubly linked list.
* @index: Index of the node to retrieve, starting from 0.
*
* Return: Pointer to the nth node, or NULL if the node does not exist.
*
* Description:
* This function traverses a doubly linked list starting from the head
* and iterates through each node while keeping track of its position.
* If the current position matches the given index, it returns a pointer
* to that node. If the index is out of bounds (greater than or equal to
* the number of nodes in the list), it returns NULL.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *current = head;
unsigned int count = 0;
while (current != NULL)
{
if (count == index)
return (current);
current = current->next;
count++;
}
return (NULL);
}
