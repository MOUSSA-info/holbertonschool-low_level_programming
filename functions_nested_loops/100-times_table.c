#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers.
 * Description:
 * The program calculates andprints
 * prints the first 98 Fibonacci numbers starting with
 * 1 and 2, separated by a comma followed by a space.
 * The Fibonacci sequence is calculated using only integer operations and is
 * printed to the standard output.
 * Return: Always 0 (Success)
 */

int main(void)
{
unsigned long a = 1, b = 2;
unsigned long temp;
int i;

printf("%lu, %lu", a, b);

for (i = 3; i <= 98; i++)
{
temp = a + b;
printf(", %lu", temp);
a = b;
b = temp;
}

printf("\n");
(return 0);
}
