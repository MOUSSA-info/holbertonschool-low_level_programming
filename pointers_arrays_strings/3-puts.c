#include "main.h"

/**
* _puts - prints a string followed by a new line
* @str: pointer to the string to print
*
* Description: This function loops through each character of the string
* and prints it to stdout using the _putchar function.
*/
void _puts(char *str)
{

while (*str != '\0')
{
_putchar(*str);
str++;
}

_putchar('\n');
}
