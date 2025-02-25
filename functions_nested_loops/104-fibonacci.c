#include <stdio.h>

/**
* main - Prints the first 98 Fibonacci numbers
*
* Return: 0 (Success)
*/
int main(void)
{
unsigned long a = 1, b = 2, next;
int count;

printf("%lu, %lu", a, b);

for (count = 3; count <= 98; count++)
{
next = a + b;
printf(", %lu", next);

a = b;
b = next;
}

printf("\n");
return (0);
}
