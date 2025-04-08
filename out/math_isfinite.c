//https://en.cppreference.com/w/c/math/isfinite.html

#include <float.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    printf("isfinite(NAN)         =%d\n", isfinite(NAN));
    printf("isfinite(INFINITY)    =%d\n", isfinite(INFINITY));
    printf("isfinite(0.0)         =%d\n", isfinite(0.0));
    printf("isfinite(DBL_MIN/2.0) =%d\n", isfinite(DBL_MIN / 2.0));
    printf("isfinite(1.0)         =%d\n", isfinite(1.0));
    printf("isfinite(exp(800))    =%d\n", isfinite(exp(800)));
}