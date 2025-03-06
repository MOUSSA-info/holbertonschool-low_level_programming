#include "main.h"

/**
* _print_rev_recursion - Prints a string in reverse
* @s: The string to be printed in reverse
*
* Description: This function uses recursion to traverse
* the string to its end, and then prints characters in reverse order.
*/
void _print_rev_recursion(char *s)
{
if (*s == '\0')
return;

_print_rev_recursion(s + 1);
_putchar(*s);
}
