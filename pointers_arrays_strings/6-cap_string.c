#include "main.h"

/**
* cap_string - Capitalizes all words of a string
* @str: The string to be modified
*
* Description: This function capitalizes
* the first letter of each word in the
* input string. Words are separated
* by: space, tabulation, new line, comma,
* semicolon, period, exclamation mark, question mark, double quote,
* parentheses, and curly braces.
*
* Return: A pointer to the modified string
*/
char *cap_string(char *str)
{
int i = 0;
int capitalize_next = 1;

while (str[i] != '\0')
{
if (capitalize_next && str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 32;
}

capitalize_next = 0;

if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
    str[i] == ',' || str[i] == ';' || str[i] == '.' ||
    str[i] == '!' || str[i] == '?' || str[i] == '"' ||
    str[i] == '(' || str[i] == ')' || str[i] == '{' ||
    str[i] == '}')
{
capitalize_next = 1;
}

i++;
}

return (str);
}
