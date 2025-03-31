#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* *add_node - adds a new_node at the beginning of a list_t list.
* @head: head of list_t list.
* @str: string to duplicate in new_node.
* Return: adress of new element or NULL if failed.
*/

list_t	*add_node(list_t **head, const char *str)
{
list_t *new_node;
int	len = 0;

while (str[len])
len++;
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
new_node->str = strdup(str);
new_node->len = len;
new_node->next = *head;
*head = new_node;
return (new_node);
}
