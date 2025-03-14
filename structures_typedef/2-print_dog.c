#include <stdio.h>
#include <stddef.h>
#include "dog.h"

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
