#include "main.h"

/**
* is_prime_helper - Helper function to check if a number is prime
* @n: The number to check
* @divisor: The current divisor to test
*
* Return: 1 if n is prime, 0 otherwise
*/
int is_prime_helper(int n, int divisor)
{
if (n <= 1)
{
return (0);
}
else if (divisor * divisor > n)
{
return (1);
}
else if (n % divisor == 0)
{
return (0);
}
else
{
return (is_prime_helper(n, divisor + 1));
}
}

/**
* is_prime_number - Checks if a number is prime
* @n: The number to check
*
* Return: 1 if n is prime, 0 otherwise
*/
int is_prime_number(int n)
{
return (is_prime_helper(n, 2));
}
