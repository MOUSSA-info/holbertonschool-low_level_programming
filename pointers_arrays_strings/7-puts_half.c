#include "main.h"
#include <string.h>

/**
* puts_half - Prints the second half of a string.
* @str: The string to print half of.
* 
* If the string length is odd, it will print the last (n + 1) / 2 characters.
*/
void puts_half(char *str)
{
int len = 0;
int start_index;
while (str[len] != '\0')
{
len++;
}
while (str[start_index] != '\0')
{
_putchar(str[start_index]);
start_index++;
}
_putchar('\n');
}
