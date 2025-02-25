#include <stdio.h>

/**
* main - Prints the first 98 Fibonacci numbers
* Return: 0 (Success)
*/
int main(void)
{
unsigned long a = 1, b = 2, next, a_high, a_low, b_high, b_low, carry;
int count;

printf("%lu, %lu", a, b);

for (count = 3; count <= 92; count++)
{
next = a + b;
printf(", %lu", next);
a = b;
b = next;
}

a_high = a / 1000000000;
a_low = a % 1000000000;
b_high = b / 1000000000;
b_low = b % 1000000000;

for (; count <= 98; count++)
{
carry = (a_low + b_low) / 1000000000;
next = (a_low + b_low) % 1000000000;
a_high = a_high + b_high + carry;
a_low = next;

printf(", %lu%09lu", a_high, a_low);

a_high = b_high;
a_low = b_low;
b_high = a_high;
b_low = a_low;
}

printf("\n");
return (0);
}
