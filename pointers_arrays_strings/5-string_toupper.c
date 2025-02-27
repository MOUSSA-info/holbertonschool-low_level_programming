#include "main.h"

/**
* string_toupper - Changes all lowercase letters of a string to uppercase
* @str: The string to be modified
*
* Description: This function iterates through each character of the input
* string. If a lowercase letter is found (ASCII value between 'a' and 'z'),
* it is converted to uppercase by subtracting 32 from its ASCII value.
* The modification is done in-place, altering the original string.
*
* Return: A pointer to the modified string
*/
char *string_toupper(char *str)
{
int i = 0;

while (str[i] != '\0')
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 32;
}
i++;
}

return (str);
}
