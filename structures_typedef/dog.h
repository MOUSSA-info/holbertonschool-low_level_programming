#ifndef DOG_H
#define DOG_H

#include <stdlib.h> // For size_t

/**
 * struct dog - Represents a dog with a name, age, and owner.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 */
typedef struct dog {
    char *name;
    float age;
    char *owner;
} dog_t;

/* Function prototypes */
dog_t *new_dog(char *name, float age, char *owner); // Add this line

#endif
