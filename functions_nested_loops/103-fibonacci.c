#include <stdio.h>

/**
* main - Finds the sum of even Fibonacci numbers not exceeding 4,000,000.
* Return: Always 0.
*/
int main(void)
{
long a = 1, b = 2, next, sum = 2;

while (1)
{
next = a + b;
if (next > 4000000)
break;

if (next % 2 == 0)
sum += next;

a = b;
b = next;
}

printf("%ld\n", sum);
return (0);
}
