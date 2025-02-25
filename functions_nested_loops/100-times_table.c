#include "main.h"

/**
* print_times_table - Prints the n times table, starting with 0.
* @n: The multiplication table to print.
*
* Description: If n is greater than 15 or less than 0,
*/
void print_times_table(int n)
{
int i, j, result;
char c;

if (n < 0 || n > 15)
return;

for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
result = i * j;
if (j != 0)
{
_putchar(',');
_putchar(' ');
}
if (result >= 100)
{
c = (result / 100) + '0';
_putchar(c);
result %= 100;
}
if (result >= 10)
{
c = (result / 10) + '0';
_putchar(c);
result %= 10;
}
c = result + '0';
_putchar(c);
}

_putchar('\n');
}
}
