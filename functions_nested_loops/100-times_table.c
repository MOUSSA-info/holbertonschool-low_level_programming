#include <stdio.h>

/**
* print_times_table - Prints the n times table, starting with 0.
* @n: The number of the times table to print.
*
* Description: If n is greater than 15 or less than 0, the function
* does nothing. The numbers are properly formatted with commas and spaces.
*/
void print_times_table(int n)
{
int i, j, product;

if (n < 0 || n > 15)
return;

for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
product = i * j;

if (j == 0)
printf("%d", product);
else
printf(", %3d", product);
}
printf("\n");
}
}

