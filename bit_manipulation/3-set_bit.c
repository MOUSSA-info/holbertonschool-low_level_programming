#include "main.h"

/**
* set_bit - Sets the value of a bit at a given index to 1.
* @n: Pointer to the number whose bit will be set.
* @index: Index of the bit to set (starting from 0).
*
* Return: 1 on success, -1 on failure.
*
* Description:
* - Validates input (non-NULL pointer and index within bit range).
* - Uses bitwise OR to set the target bit to 1.
* - Handles edge cases like invalid index or NULL pointer.
*/
int set_bit(unsigned long int *n, unsigned int index)
{
if (n == NULL || index >= (sizeof(unsigned long int) * 8))
return (-1);
*n |= (1UL << index);
return (1);
}
