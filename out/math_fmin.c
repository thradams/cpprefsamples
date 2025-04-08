//https://en.cppreference.com/w/c/math/fmin.html

#include <math.h>
#include <stdio.h>

int main(void)
{
    printf("fmin(2,1)    =%f\n", fmin(2, 1));
    printf("fmin(-Inf,0) =%f\n", fmin(-INFINITY, 0));
    printf("fmin(NaN,-1) =%f\n", fmin(NAN, -1));
}