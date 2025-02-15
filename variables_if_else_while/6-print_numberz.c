#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all single-digit numbers of base 10 starting from 0.
 *              Uses only putchar and no char variables.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num;

for (num = 0; num < 10; num++)
putchar(num + '0');  /* Convert int to char by adding '0' */
putchar('\n');  /* Print new line */
return (0);
}
