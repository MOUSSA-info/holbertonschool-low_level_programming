#include "main.h"

/**
* _strncpy - Copies a string
* @dest: The destination buffer where the string will be copied
* @src: The source string to copy
* @n: The maximum number of bytes to copy from src
*
* Description:
* This function copies at most `n` characters from
* the string `src` to the buffer `dest`.
* If the length of `src` is less than `n`,
* the remainder of `dest` will be padded with
* null bytes ('\0'). If `n` is greater
* than or equal to the length of `src`, only the
* characters in `src` are copied, and no additional null bytes are added.
* Return: A pointer to the resulting string `dest`
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}

for (; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
