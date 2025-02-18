#include "main.h"

/**
 * times_table - Prints the 9 times table, starting from 0.
 *
 * Description: This function prints the 9 times table, one row at a time.
 *              Each row contains the products of a number from 0 to 9,
 *              formatted with commas and spaces as required. It uses the
 *              putchar function to print each character.
 */
void times_table(void)
{
int i, j, product;

for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
product = i * j;

if (j != 0)
{
putchar(',');
putchar(' ');
}

if (product < 10)
putchar('0' + product);
}
else
{
putchar('0' + (product / 10));
putchar('0' + (product % 10));
}
}
putchar('\n');
}
}
