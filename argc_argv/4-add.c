#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* is_positive_number - Checks if a string represents a positive number
* @str: The string to check
*
* Description: This function checks if a string consists only of digits.
* It iterates through each character in the string and uses the isdigit
* function to verify if the character is a digit. If any character is not
* a digit, the function returns 0. Otherwise, it returns 1.
*
* Return: 1 if the string is a positive number, 0 otherwise
*/
int is_positive_number(char *str)
{
int i = 0;

while (str[i] != '\0')
{
if (!isdigit(str[i]))
return (0);
i++;
}

return (1);
}

/**
* main - Adds positive numbers passed as command-line arguments
* @argc: The number of command-line arguments
* @argv: An array of command-line argument strings
*
* Description: This program adds positive numbers passed as command-line
* arguments. If no numbers are passed, it prints 0. If any argument contains
* non-digit symbols, it prints "Error" and returns 1. The program assumes
* that all numbers and their sum can be stored in an integer.
*
* Return: 0 on success, 1 on error
*/
int main(int argc, char *argv[])
{
int sum = 0;
int i;

for (i = 1; i < argc; i++)
{

if (!is_positive_number(argv[i]))
{
printf("Error\n");
return (1);
}

sum += atoi(argv[i]);
}

printf("%d\n", sum);

return (0);
}
