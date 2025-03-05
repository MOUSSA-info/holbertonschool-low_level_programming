#include <stdio.h>
#include "main.h"

/**
* print_diagsums - Prints the sum of the two diagonals
*                  of a square matrix of integers
* @a: Pointer to the start of the matrix
* @size: Size of the matrix
*
* Description: This function calculates and prints the sum
* of the two diagonals of a square matrix.
*/
void print_diagsums(int *a, int size)
{
int i;
int sum1 = 0;
int sum2 = 0;

for (i = 0; i < size; i++)
{
sum1 += a[i * size + i];
sum2 += a[i * size + (size - 1 - i)];
}

printf("%d, %d\n", sum1, sum2);
}
