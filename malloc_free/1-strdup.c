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
char *duplicate;
size_t len;

if (str == NULL)
{
return (NULL);
}

len = strlen(str) + 1;

duplicate = malloc(len);
if (duplicate == NULL)
{
return (0);
}
memcpy(duplicate, str, len);
return (duplicate);
}
