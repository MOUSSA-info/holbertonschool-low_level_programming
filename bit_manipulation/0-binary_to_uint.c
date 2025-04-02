#include <stddef.h>

/**
* binary_to_uint - Converts a binary string to an unsigned integer.
* @b: Pointer to a string containing '0' and '1' characters.
*
* Return:
* - The converted unsigned integer if the string is valid.
* - 0 if:
*   - The string contains characters other than '0' or '1'.
*   - The input string `b` is NULL.
*   - The string is empty (no digits to convert).
*
* Description:
* This function iterates through each character of the binary string `b`.
* For each valid binary digit ('0' or '1'), it shifts the accumulated result
* left by 1 bit and adds the current digit's value. Invalid characters or a
* NULL input result in an immediate return of 0.
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
if (b == NULL)
return (0);
for (; *b != '\0'; b++)
{
if (*b != '0' && *b != '1')
return (0);
result <<= 1;
result += (*b - '0');
}
return (result);
}
