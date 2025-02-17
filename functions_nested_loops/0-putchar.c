#include <unistd.h>

/**
 * main - Prints _putchar followed by a new line using write.
 *
 * Return: 0 to indicate successful execution.
 */
int main(void)
{
write(1, "_putchar\n", 9);  /* Write _putchar followed by a new line */
return (0);  /* Return 0 to indicate successful execution */
}
