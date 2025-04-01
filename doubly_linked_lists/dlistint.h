#ifndef DLISTINT_H
#define DLISTINT_H

/**
 * struct dlistint_s - Doubly linked list node
 * @n: Integer data
 * @prev: Pointer to the previous node
 * @next: Pointer to the next node
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
}
dlistint_t;

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
#endif
