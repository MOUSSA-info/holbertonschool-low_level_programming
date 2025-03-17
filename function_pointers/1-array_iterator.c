#include "function_pointers.h"

/**
* array_iterator - Executes a function on each element of an array
* @array: Pointer to the integer array
* @size: Size of the array
* @action: Pointer to the function to execute
*
* Description:
* 1. Checks that the array and function are not NULL
* 2. Iterates through each element of the array
* 3. Applies the function `action` to each element
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array && action)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
