#include "main.h"

/**
* print_rev - Prints a string in reverse, followed by a new line.
* @s: The string to be reversed.
*
* Description:
* This function takes a string as input.
* prints the characters in reverse order.
* It stops when it reaches the null terminator (`'\0'`) of the string,
* character in reverse, and then appends a new line at the end.
*/
void print_rev(char *s)
{
int len = 0;

while (s[len] != '\0')
{
len++;
}

for (len = len - 1; len >= 0; len--)
{
_putchar(s[len]);
}

_putchar('\n');
}
