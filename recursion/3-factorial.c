#include "main.h"

/**
* factorial - Returns the factorial of a given number
* @n: The number to calculate the factorial of
*
* Return: The factorial of n, or -1 if n is negative
*
* Description: This function recursively calculates the factorial of a
* non-negative integer. Factorial of 0 is defined as 1. For negative
* inputs, it returns -1 to indicate an error.
*/
int factorial(int n)
{
/* Error case: negative number */
if (n < 0)
return (-1);

/* Base case: factorial of 0 is 1 */
if (n == 0)
return (1);

/* Recursive case: n! = n * (n-1)! */
return (n * factorial(n - 1));
}
