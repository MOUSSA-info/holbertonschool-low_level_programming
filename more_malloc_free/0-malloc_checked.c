#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* malloc_checked - Allocates memory using malloc
* @b: Number of bytes to allocate
*
* Return: Pointer to allocated memory
*/
void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);

if (ptr == NULL)
{
fprintf(stderr, "Memory allocation failed.\n");
exit(98);
}

return (ptr);
}
