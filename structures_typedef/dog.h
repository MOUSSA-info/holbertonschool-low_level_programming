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

/* Define dog_t as an alias for struct dog */
typedef struct dog dog_t;

/* Function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
