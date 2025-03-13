#include <stdlib.h>
#include <string.h>
/**
* string_nconcat - Concatenates two strings.
* @s1: The first string.
* @s2: The second string.
* @n: The maximum number of bytes to take from s2.
*
* Description: The function allocates a new block of memory that contains
* s1 followed by the first n bytes of s2. If n is greater than or equal to
* the length of s2, the entire s2 is used. If NULL is passed for s1 or s2,
* it is treated as an empty string. The resulting string is null-terminated.
*
* Return: A pointer to the newly allocated space in memory,
* or NULL on failure.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)

{

if
(s1 == NULL) s1 = "";

if
(s2 == NULL) s2 = "";

unsigned int len1 = strlen(s1);
unsigned int len2 = strlen(s2);

if
(n >= len2) n = len2;

char *result = malloc(len1 + n + 1);

if
(result == NULL) return NULL;

strcpy(result, s1);

strncat(result, s2, n);

return (0);
}

/**
* main - Entry point for testing string_nconcat function.
*
* Description: This function tests the string_nconcat function by
* concatenating "Hello, " and the first 3 characters of "World!".
* The result is printed and memory is freed.
*
* Return: 0 on success.
*/
int main(void)
{
char *s1 = "Hello, ";
char *s2 = "World!";
unsigned int n = 3;
char *concat;

concat = string_nconcat(s1, s2, n);
if (concat)
{
printf("%s\n", concat);
free(concat);
}
else
{
printf("Memory allocation failed\n");
}

return (0);
}
