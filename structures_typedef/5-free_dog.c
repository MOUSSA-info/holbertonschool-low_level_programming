#include <stdlib.h>
#include "dog.h"

/**
* free_dog - Frees the memory allocated for a dog_t structure.
* @d: Pointer to the dog_t structure to free.
*
* Return: void
*/

void free_dog(dog_t *d)
{
if (d == NULL)
return;

if (d->name != NULL)
free(d->name);
if (d->owner != NULL)
free(d->owner);

free(d);
}
