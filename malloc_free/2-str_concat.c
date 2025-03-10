#include <stdlib.h>
#include <string.h>

/**
* str_concat - Concatenates two strings
* @s1: The first string
* @s2: The second string
*
* Description: Allocates memory for a new string
* that contains the contents of
* s1 followed by s2, null-terminated.
* If s1 or s2 is NULL, it is treated as an
* empty string. Returns NULL if memory allocation fails.
*
* Return: Pointer to the concatenated string,
* or NULL on failure
*/
char *str_concat(char *s1, char *s2)
{
char *result;
unsigned int len1, len2;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

len1 = strlen(s1);
len2 = strlen(s2);

result = malloc((len1 + len2 + 1) * sizeof(char));
if (result == NULL)
return (0);

strcpy(result, s1);

strcat(result, s2);

return (result);
}
