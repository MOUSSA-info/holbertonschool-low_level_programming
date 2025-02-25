#include "main.h"
#include <stdio.h>

/**
* print_times_table - Prints the n times table, starting with 0.
* @n: The multiplication table to print.
*
* Description: If n is greater than 15 or less than 0,
*/
void print_times_table(int n)
{
int i, j, result;

if (n < 0 || n > 15) /* Valid range check */
return;

for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
result = i * j;

if (j == 0) /* First number, no comma */
printf("%d", result);
else
printf(", %3d", result); /* Aligning numbers properly */
}

printf("\n"); /* New line after each row */
}
}
