#include <stdio.h>
/**
* main - Prints the name of the program
* @argc: The number of arguments passed to the program
* @argv: An array of pointers to the arguments
*
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
(void)argc; /* Suppress unused variable warning */
printf("%s\n", argv[0]);
return (0);
}
