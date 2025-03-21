#include "variadic_functions.h"
#include <stdio.h>

/**
* print_strings - Prints strings separated by a given separator
* @separator: String to print between strings
* @n: Number of strings to print
* @...: Variable list of strings
*
* Description:
* - Prints each string from the variable arguments.
* - If a string is NULL, prints "(nil)" instead.
* - If the separator is NULL, it is not printed between strings.
* - Prints a new line at the end.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
char *str;

va_start(args, n);

for (i = 0; i < n; i++)
{
str = va_arg(args, char *);

if (str == NULL)
printf("(nil)");
else
printf("%s", str);
if (separator != NULL && i < n - 1)
printf("%s", separator);
}

printf("\n");
va_end(args);
}
