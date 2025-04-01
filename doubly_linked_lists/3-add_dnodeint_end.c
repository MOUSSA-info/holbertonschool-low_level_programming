#include <stdlib.h>
#include "dlistint.h"

/**
* add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
* @head: Double pointer to the head of the list.
* @n: Integer value for the new node.
*
* Return: Address of the new node, or NULL on failure.
*
* Description:
* 1. Checks if the input `head` is valid.
* 2. Allocates memory for the new node.
* 3. Traverses the list to find the last node.
* 4. Links the new node to the end of the list.
* 5. Updates pointers to maintain the doubly linked structure.
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node, *last_node;
if (head == NULL)
return (NULL);
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = NULL;
if (*head == NULL)
{
new_node->prev = NULL;
*head = new_node;
}
else
{
last_node = *head;
while
(last_node->next != NULL)
last_node = last_node->next;
last_node->next = new_node;
new_node->prev = last_node;
}
return (new_node);
}
