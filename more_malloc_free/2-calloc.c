#include <stdlib.h>

/**
* _calloc - Allocates memory for an array and initializes it to zero
* @nmemb: Number of elements in the array
* @size: Size of each element in bytes
*
* Return: Pointer to the allocated memory, or NULL if it fails
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned int total_size;
unsigned char *byte_ptr;
unsigned int i;

if (nmemb == 0 || size == 0)
	return (NULL);

total_size = nmemb * size;

ptr = malloc(total_size);
if (ptr == NULL)
	return (NULL);

byte_ptr = (unsigned char *)ptr;
for (i = 0; i < total_size; i++)
	byte_ptr[i] = 0;

return (ptr);
}
