#include <stdlib.h>

/**
* create_array - Creates an array of chars and
* initializes it with a specific char
* @size: The size of the array to create
* @c: The character to initialize the array with
* Description: Allocates memory for an array of size chars,
* initializes each element
* with char c. Returns NULL if size is 0 or if malloc fails.
*
* Return: Pointer to the array, or NULL if size is 0 or malloc fails
*/
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;

if (size == 0)
return (0);

array = malloc(size * sizeof(char));
if (array == NULL)
return (0);

for (i = 0; i < size; i++)
array[i] = c;

return (array);
}
