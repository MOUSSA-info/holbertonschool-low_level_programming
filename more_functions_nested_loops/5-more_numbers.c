#include "main.h"

/**
* more_numbers - Prints 10 times the numbers from 0 to 14.
*/
void more_numbers(void)
{
int i, j;

for (i = 0; i < 10; i++)  /* Outer loop to repeat 10 times */
{
for (j = 0; j < 15; j++)  /* Inner loop to print numbers 0 to 14 */
{
if (j >= 10)
_putchar(j / 10 + '0');
_putchar(j % 10 + '0');
}
_putchar('\n');
}
}
