#include "main.h"

/**
* puts_half - Prints the second half of a string
* @str: The string to be printed
*/

void puts_half(char *str)
{
int length = 0, start_index;

while (str[length] != '\0')
length++;

start_index = (length % 2 == 0) ? (length / 2) : ((length + 1) / 2);

while (str[start_index] != '\0')
{
_putchar(str[start_index]);
start_index++;
}
_putchar('\n');
}
