#include <stdio.h>

/**
 * main - Prints the name of the source file
 *
 * Description: This program uses the __FILE__ macro
 * to print the name of the
 * source file from which it is compiled.
 * This allows the program to dynamically
 * print its own file name without hardcoding it.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
printf("Source file name: %s\n", __FILE__);
return (0);
}
