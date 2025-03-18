#include "variadic_functions.h"
#include <stdio.h>

/**
* print_numbers - Prints numbers separated by a given string
* @separator: String to print between numbers
* @n: Number of integers to print
* @...: Variable list of integers
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;

va_start(args, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(args, int));

if (separator != NULL && i < n - 1)
printf("%s", separator);
}

va_end(args);
printf("\n");
}
