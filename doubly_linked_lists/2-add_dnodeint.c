#include <stdlib.h>
#include "dlistint.h"

/**
* add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
* @head: Double pointer to the head of the doubly linked list.
* @n: Integer value to store in the new node.
*
* Return: Address of the new element, or NULL if it failed.
*
* Description:
* This function creates a new node and inserts it at the beginning of
* a doubly linked list. It adjusts the pointers of both the new node
* and the existing head node (if any) to maintain the integrity of
* the doubly linked list structure. If memory allocation fails, it
* returns NULL.
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node;


if (head == NULL)
return (NULL);


new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);


new_node->n = n;
new_node->prev = NULL;
new_node->next = *head;


if (*head != NULL)
(*head)->prev = new_node;


*head = new_node;

return (new_node);
}
