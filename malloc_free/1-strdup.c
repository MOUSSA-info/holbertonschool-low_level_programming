#include <stdlib.h>
#include <string.h>

/**
* _strdup - Duplicates a string
* @str: The string to duplicate
*
* Return: A pointer to the duplicated string, or NULL if str is NULL or if
* insufficient memory is available
*/
char *_strdup(char *str)
{
char *Duplicated;
size_t len;

if (str == NULL)
{
return (NULL);
}

len = strlen(str) + 1;

Duplicated = malloc(len);
if (Duplicated == NULL)
{
return (NULL);
}
strcpy(Duplicated, str);
return (Duplicated);
}
