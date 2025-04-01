#ifndef DLISTINT_H
#define DLISTINT_H

/**
 * struct dlistint_s - Doubly linked list node structure
 * @n: Integer data stored in the node
 * @prev: Pointer to the previous node
 * @next: Pointer to the next node
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);

#endif
