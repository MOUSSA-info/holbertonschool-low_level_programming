#include "main.h"
#include <stdio.h>

/**
* print_name - Executes a function to print a name.
* @name: Name string to pass to the function.
* @f: Pointer to the printing function.
*/
void print_name(char *name, void (*f)(char *))
{
if (f && name)
f(name);
}
