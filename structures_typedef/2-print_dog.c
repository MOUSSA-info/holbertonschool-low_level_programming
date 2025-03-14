#include <stdio.h>
#include <stddef.h>

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

/**
* print_dog - Prints the details of a struct dog.
* @d: Pointer to the struct dog to print.
*
* Format:
* Name: <name>
* Age: <age>
* Owner: <owner>
*
* If an element is NULL, print (nil) instead.
* If d is NULL, print nothing.
*/
void print_dog(struct dog *d)
{
if (d == NULL)
return;

printf("Name: %s\n", d->name ? d->name : "(nil)");

printf("Age: %.6f\n", d->age);

printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
