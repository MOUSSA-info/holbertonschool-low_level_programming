#include "main.h"

/**
* print_diagonal - Trace une ligne diagonale dans le terminal.
* @n: Le nombre de fois où le caractère '\' doit être imprimé.
*/
void print_diagonal(int n)
{
int i, j;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
