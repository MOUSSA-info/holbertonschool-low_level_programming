#include "main.h"

/**
* _strcmp - Compares two strings
* @s1: The first string to be compared
* @s2: The second string to be compared
*
* Description: This function compares two strings character by character.
* It returns an integer less than,
* equal to, or greater than zero if s1 is found,
* respectively, to be less than, to match, or be greater than s2.
*
* Return: 0 if the strings are equal, a negative value if s1 < s2,
*         or a positive value if s1 > s2
*/
int _strcmp(char *s1, char *s2)
{
while (*s1 && (*s1 == *s2))
{
s1++;
s2++;
}
return (unsigned char *);
}
