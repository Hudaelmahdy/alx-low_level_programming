#ifndef CALC_H
#define CALC_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct op - struct op
 * @op: the operator
 * @f: the function associated
*/
typedef struct op
{
    char *op
    int (*f)(int a, int b);
}po_t;

int of_add(int a, int b);
int of_sub(int a, int b);
int of_mul(int a, int b);
int of_div(int a, int b);
int of_mod(int a, int b);

int (*get_op_func(char *s))(int, int);
#endif
