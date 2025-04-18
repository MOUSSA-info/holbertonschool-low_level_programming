#ifndef CALC_H
#define CALC_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct op - Struct to map operators to functions
 * @op: Operator symbol (e.g., "+")
 * @f: Corresponding function pointer
 */
typedef struct op
{
char *op;
int (*f)(int a, int b);
} op_t;

/* Function Prototypes */
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
