#include "main.h"

/**
* print_number - Prints a formatted number with correct spacing
* @num: The number to print
*/
void print_number(int num)
{
if (num < 10)
{
_putchar(' ');
_putchar(' ');
_putchar('0' + num);
}
else if (num < 100)
{
_putchar(' ');
_putchar((num / 10) + '0');
_putchar((num % 10) + '0');
}
else
{
_putchar((num / 100) + '0');
_putchar(((num / 10) % 10) + '0');
_putchar((num % 10) + '0');
}
}

/**
* print_times_table - Prints the n times table, starting from 0
* @n: The multiplication table size
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
if (j > 0)
{
_putchar(',');
_putchar(' ');
}
print_number(product);
}
_putchar('\n');
}
}
