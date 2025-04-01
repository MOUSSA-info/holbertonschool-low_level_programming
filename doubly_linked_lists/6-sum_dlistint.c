#include <stddef.h>
#include "dlistint.h"

/**
* sum_dlistint - Calculates the sum of all the data (n) in a dlistint_t list.
* @head: Pointer to the head of the doubly linked list.
*
* Return: The sum of all the data (n) in the list, or 0 if the list is empty.
*
* Description:
* This function traverses a doubly linked list starting from the head,
* accumulating the values stored in each node's `n` field. If the list
* is empty, it returns 0.
*/

int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t *current = head;
while (current != NULL)
{
sum += current->n;
current = current->next;
}
return (sum);
}
