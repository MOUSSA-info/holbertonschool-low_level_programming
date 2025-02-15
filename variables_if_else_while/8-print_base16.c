#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all the numbers of base 16 in lowercase.
 *              Uses only putchar and no other functions.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num;

for (num = '0'; num <= '9'; num++)
putchar(num);

for (num = 'a'; num <= 'f'; num++)
putchar(num);
utchar('\n');  /* Print new line */
return (0);
}
