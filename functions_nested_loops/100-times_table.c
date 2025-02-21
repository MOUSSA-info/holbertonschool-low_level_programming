#include <stdio.h>

/**
* print_times_table - Prints the n times table, starting from 0.
* @n: The size of the multiplication table.
*/
void print_times_table(int n)
{
int i, j;

for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
if (j > 0)
printf(", ");
printf("%2d", i * j);
}
printf("\n");
}
}
