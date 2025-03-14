#include <stdlib.h>
#include <string.h>

/**
* _calloc - Alloue de la mémoire pour un tableau et l'initialise à zéro.
* @nmemb: Nombre d'éléments.
* @size: Taille de chaque élément.
*
* Return: Pointeur vers la mémoire allouée, ou NULL en cas d'échec.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
/* Déclarer toutes les variables au début du bloc */
unsigned int total_size;
void *ptr;

/* Vérifier les entrées invalides */
if (nmemb == 0 || size == 0)
return (NULL);

/* Calculer la taille totale de la mémoire nécessaire */
total_size = nmemb * size;

/* Allouer la mémoire */
ptr = malloc(total_size);
if (ptr == NULL)
return (NULL);

/* Initialiser la mémoire à zéro */
memset(ptr, 0, total_size);

/* Retourner le pointeur */
return (ptr);
}
