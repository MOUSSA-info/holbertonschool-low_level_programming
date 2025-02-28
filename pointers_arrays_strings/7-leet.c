#include "main.h"

/**
* leet - Encodes a string into 1337
* @str: The string to be encoded
*
* Description: This function replaces specific letters with numbers:
* 'a' and 'A' with '4', 'e' and 'E' with '3', 'o' and 'O' with '0',
* 't' and 'T' with '7', 'l' and 'L' with '1'.
* It uses only one if statement and two loops as per requirements.
*
* Return: A pointer to the encoded string
*/
char *leet(char *str)
{
int i, j;
char leet_letters[] = "aAeEoOtTlL";
char leet_numbers[] = "4433007711";

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; leet_letters[j] != '\0'; j++)
{
if (str[i] == leet_letters[j])
{
str[i] = leet_numbers[j];
break;
}
}
}

return (str);
}
