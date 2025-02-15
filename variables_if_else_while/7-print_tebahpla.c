#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet in reverse order.
 *              Uses only putchar and no other functions.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter;

for (letter = 'z'; letter >= 'a'; letter--)
putchar(letter);
putchar('\n');  /* Print new line */
return (0);
}
