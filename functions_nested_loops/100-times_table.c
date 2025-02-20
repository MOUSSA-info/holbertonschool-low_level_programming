#include "main.h"

/**
* print_times_table - Prints the n times table, starting with 0.
* @n: The number of the times table to print.
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

if (j != 0)
{
_putchar(',');
_putchar(' ');

if (product < 10)
    _putchar(' '), _putchar(' ');  /* Align numbers */
else if (product < 100)
    _putchar(' ');
}

if (product >= 100)
{
_putchar('0' + (product / 100));
_putchar('0' + ((product / 10) % 10));
}
else if (product >= 10)
_putchar('0' + (product / 10));

_putchar('0' + (product % 10));
}
_putchar('\n');
}
}
