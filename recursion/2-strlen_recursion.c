#include "main.h"

/**
* _strlen_recursion - Returns the length of a string
* @s: The string to calculate the length of
*
* Return: The length of the string
*/
int _strlen_recursion(char *s)
{
/* Base case: if we've reached the end of the string */
if (*s == '\0')
return (0);

/* Move to the next character and add 1 to the count */
s++;
return (1 + _strlen_recursion(s));
}
