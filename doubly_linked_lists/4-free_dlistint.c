#include <stdlib.h>
#include "dlistint.h"

/**
* free_dlistint - Frees a doubly linked list.
* @head: Pointer to the head of the list.
*
* Description:
* This function traverses the doubly linked list starting from the head,
* freeing each node's allocated memory. It ensures that all nodes are
* properly deallocated, preventing memory leaks. If the list is empty,
* the function does nothing.
*/

void free_dlistint(dlistint_t *head)
{
dlistint_t *current;
while (head != NULL)
{
current = head;
head = head->next;
free(current);
}
}
