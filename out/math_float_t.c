//https://en.cppreference.com/w/c/math/float_t.html

#include <float.h>
#include <math.h>
#include <stdio.h>

#define SHOW(expr) printf("%s =%d\n", #expr, (int)(expr))

int main()
{
    SHOW(FLT_EVAL_METHOD);
    SHOW(sizeof(float));
    SHOW(sizeof(float_t));
    SHOW(sizeof(double));
    SHOW(sizeof(double_t));
}