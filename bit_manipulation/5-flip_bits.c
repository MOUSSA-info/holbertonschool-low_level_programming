#include "main.h"

/**
* flip_bits - Counts the number of bits to flip
* to convert one number to another.
* @n: The first number.
* @m: The second number.
*
* Return: The number of bits that need to be flipped.
*
* Description:
* This function computes the XOR of two numbers, which highlights the bits
* that differ between them. It then counts the number of set bits (1s) in the
* XOR result using bitwise operations. This avoids using division or modulus.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor_result = n ^ m;
unsigned int count = 0;
while (xor_result != 0)
{
count += xor_result & 1;
xor_result >>= 1;
}
return (count);
}
