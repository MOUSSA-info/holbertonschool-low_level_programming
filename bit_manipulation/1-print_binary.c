#include "main.h"

/**
* print_binary - Prints the binary representation of a number.
* @n: The unsigned long integer to be printed in binary.
*
* Description:
* This function prints the binary digits of an unsigned long integer
* without using arrays, dynamic memory allocation,
* or the modulus/division operators.
* It leverages bitwise operations to check
* each bit from the most significant
* to the least significant, skipping leading zeros.
*/

void print_binary(unsigned long int n)
{
unsigned long int mask;
int started = 0;
if (n == 0)
{
putchar('0');
return;
}
mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
while (mask > 0)
{
if (n & mask)
{
putchar('1');
started = 1;
}
else if (started)
{
putchar('0');
}
mask >>= 1;
}
}
