#include "main.h"

/**
* print_most_numbers - Prints the numbers from 0 to 9, excluding 2 and 4.
*
* Description: This function loops through the numbers 0 to 9 and prints each
* number, except for 2 and 4. The numbers are printed on the same line, 
* followed by a new line at the end.
*/
void print_most_numbers(void)
{
char c;

for (c = '0'; c <= '9'; c++)
{
if (c != '2' && c != '4')
{
_putchar(c);
}
}

_putchar('\n');
}
