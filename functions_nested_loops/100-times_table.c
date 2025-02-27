#include <stdio.h>

/**
* main - finds and prints the first 98 Fibonacci numbers
*
* Description: The program calculates
* prints the first 98 Fibonacci numbers
* starting from 1 and 2, followed by a comma.
*  a space, with a new line at the end.
* Return: Always 0 (Success)
*/
int main(void)
{
unsigned long fib1 = 1, fib2 = 2;
unsigned long fib_next;
int i;

printf("%lu, %lu", fib1, fib2);

for (i = 3; i <= 98; i++)
{
fib_next = fib1 + fib2;
printf(", %lu", fib_next);
fib1 = fib2;
fib2 = fib_next;
}

printf("\n");

return (0);

}
