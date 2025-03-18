#include "variadic_functions.h"

/**
* sum_them_all - Calculates the sum of
* variable number of integers
* @n: Number of integers to sum (must be >= 0)
* @...: Variable arguments (integers) to be summed
*
* Returns:
* - Sum of all provided integers
* - 0 if n == 0 (no numbers to sum)
*/
int sum_them_all(const unsigned int n, ...)
{
va_list args;
int sum = 0;
unsigned int i;

if (n == 0)
return (0);

va_start(args, n);

for (i = 0; i < n; i++)
{
sum += va_arg(args, int);
}

va_end(args);
return (sum);
}
