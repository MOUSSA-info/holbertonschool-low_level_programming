
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* *add_node_end - adds new node at the end of a list_t list.
* @head: head of list_t list.
* @str: string to duplicate into new_node.
* Return: the address of the new element or NULL if it failed.
*/

list_t	*add_node_end(list_t **head, const char *str)
{
list_t *new_node;
list_t *last = *head;
size_t	len = 0;

while (str[len])
len++;
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
new_node->str = strdup(str);
new_node->len = len;
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
return (new_node);
}
while (last->next != NULL)
last = last->next;
last->next = new_node;
return (new_node);
}
