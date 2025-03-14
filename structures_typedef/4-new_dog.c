#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
* new_dog - Creates a new dog with copies of name and owner.
* @name: The name of the dog.
* @age: The age of the dog.
* @owner: The owner of the dog.
*
* Return: Pointer to the new dog, or NULL on failure.
*/

dog_t *new_dog(char *name, float age, char *owner)

{
dog_t *new_d;

if (name == NULL || owner == NULL)
return (NULL);

new_d = malloc(sizeof(dog_t));
if (new_d == NULL)
return (NULL);

new_d->name = strdup(name);
if (new_d->name == NULL)
{
free(new_d);
return (NULL);
}

new_d->owner = strdup(owner);
if (new_d->owner == NULL)
{
free(new_d->name);
free(new_d);
return (NULL);
}

new_d->age = age;
return (new_d);
}
