#include <stdlib.h>

/**
* array_range - Creates an array of integers from min to max (inclusive).
* @min: The minimum value (inclusive).
* @max: The maximum value (inclusive).
*
* Return: Pointer to the newly created array,
* or NULL if min > max or malloc fails.
*/
int *array_range(int min, int max)
{
int *arr;
int size, i;

if (min > max)
return (NULL);

size = max - min + 1;

arr = malloc(sizeof(int) * size);
if (arr == NULL)
return (NULL);

for (i = 0; i < size; i++)
{
arr[i] = min + i;
}

return (arr);
}
