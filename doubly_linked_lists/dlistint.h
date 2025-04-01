#ifndef DLISTINT_H
#define DLISTINT_H

/**
 * struct dlistint_s - doubly linked list node
 * @n: integer data
 * @prev: pointer to previous node
 * @next: pointer to next node
 */
typedef struct dlistint_s {
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

/**
 * add_dnodeint - Adds new node at beginning of dlistint_t list
 * @head: Double pointer to head node
 * @n: Integer value for new node
 * Return: Address of new element, NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n);

#endif
