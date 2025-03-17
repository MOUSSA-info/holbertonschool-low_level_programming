#include <stddef.h>

/**
* int_index - Searches for an integer in an array
* using a comparison function
* @array: Pointer to the integer array
* @size: Number of elements in the array
* @cmp: Pointer to the comparison function
* Return: Index of first match, or -1 if no match/size <=0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array == NULL || cmp == NULL || size <= 0)
return (-1);

for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}

return (-1);
}
