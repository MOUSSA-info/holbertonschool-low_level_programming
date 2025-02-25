#include "main.h"

/**
* print_line - Trace une ligne droite dans le terminal.
* @n: Le nombre de fois où le caractère _ doit être imprimé.
*/
void print_line(int n)
{
int i;

if (n <= 0)
{
_putchar('\n');
}
else

{
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
}
