#include "main.h"

/**
* reverse_array - Reverses the content of an array of integers
* @a: Pointer to the array to be reversed
* @n: Number of elements in the array
*
* Description:
* This function reverses the order of elements
* in an array of integers.
* It swaps elements from the beginning
* end of the array, moving towards
* the center until all elements have been reversed.
*/
void reverse_array(int *a, int n)
{
int temp, i;

for (i = 0; i < n / 2; i++)
{
temp = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = temp;
}
}
