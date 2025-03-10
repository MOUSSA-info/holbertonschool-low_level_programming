#include <stdio.h>

/**
* main - Prints the number of arguments passed into it
* @argc: The number of command-line arguments
* @argv: An array of command-line argument strings (unused)
*
* Return: Always 0 (success)
*/
int main(int argc, char *argv[])
{
(void)argv;
printf("%d\n", argc - 1);
return (0);
}
