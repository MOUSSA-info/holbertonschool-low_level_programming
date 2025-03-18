#include "variadic_functions.h"
#include <stdio.h>

/**
* print_strings - Prints strings separated by a given separator
* @separator: String to print between strings
* @n: Number of strings to print
* @...: Variable list of strings
*
* Description:
* - Prints "(nil)" for NULL strings.
* - Prints nothing if `n == 0`, except the final new line.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;

va_start(args, n);

for (i = 0; i < n; i++)
{
char *current_str = va_arg(args, char *);
if (current_str == NULL)
printf("(nil)");
printf("%s", current_str);
if (separator != NULL && i < n - 1)
printf("%s", separator);
}

va_end(args);
printf("\n");
}
