#include <stdio.h>
#include "main.h"

/**
* print_array - Prints n elements of an integer array
* @a: The array of integers
* @n: The number of elements to print
*
* Description: Numbers are printed in the same order as stored in the array,
* separated by ", " and followed by a new line.
*/

void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%d", a[i]);

if (i < n - 1)
printf(", ");
}

printf("\n");
}
