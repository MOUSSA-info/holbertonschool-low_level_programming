#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Represents a dog with a name, age, and owner.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 */

struct dog
{
char *name;
float age;
char *owner;
};

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);

#endif
