#include "main.h"

/**
* get_bit - Returns the value of a bit at a given index.
* @n: The number to examine.
* @index: The index of the bit to retrieve, starting from 0.
*
* Return: The value of the bit at the given index (0 or 1),
*  or -1 if an error occurred (e.g., index out of range).
*
* Description:
* This function uses bitwise operations to extract the value of a bit
* at a specific position. It first checks if the index is valid, then
* shifts the bits of `n` to the right by `index` positions, isolating
* the desired bit in the least significant position. Finally, it uses
* a bitwise AND operation to return either 0 or 1.
*/
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
return (-1);
return ((n >> index) & 1);
}
