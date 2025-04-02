#include "main.h"

/**
* clear_bit - Sets the value of a bit to 0 at a given index.
* @n: Pointer to the number whose bit will be cleared.
* @index: Index of the bit to clear (starting from 0).
*
* Return: 1 on success, -1 on failure.
*
* Description:
* - Validates input (non-NULL pointer and index within bit range).
* - Uses bitwise AND with a mask to clear the target bit.
* - Handles edge cases like invalid index or NULL pointer.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (n == NULL || index >= (sizeof(unsigned long int) * 8))
return (-1);
*n &= ~(1UL << index);
return (1);
}
