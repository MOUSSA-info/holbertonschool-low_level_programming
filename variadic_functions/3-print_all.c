#include "variadic_functions.h"
#include <stdio.h>

/**
* print_all - Prints values based on a format string
* @format: Format string specifying types of arguments
* @...: Variable arguments to print
*
* Description:
* - Prints values separated by ", ".
* - For strings, prints "(nil)" if NULL.
* - Ignores invalid format specifiers.
* - Ends with a new line.
*/

void print_all(const char * const format, ...)
{
va_list args;
int i = 0;
char *s;
char *sep = "";
va_start(args, format);
while (format && format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", sep, va_arg(args, int));
sep = ", ";
break;
case 'i':
printf("%s%d", sep, va_arg(args, int));
sep = ", ";
break;
case 'f':
printf("%s%f", sep, va_arg(args, double));
sep = ", ";
break;
case 's':
s = va_arg(args, char *);
if (s == NULL)
s = "(nil)";
printf("%s%s", sep, s);
sep = ", ";
break;
}
i++;
}
printf("\n");
va_end(args);
}
