#include <stdio.h>

/**
* main - Prints all arguments received
* @argc: The number of command-line arguments
* @argv: An array of command-line argument strings
*
* Description: This program prints all arguments
*  passed to it, including the
* first one (the program name). Each argument is printed on a new line.
*
* Return: Always 0 (success)
*/
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}

return (0);
}
