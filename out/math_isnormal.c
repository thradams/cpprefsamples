//https://en.cppreference.com/w/c/math/isnormal.html

#include <float.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    printf("isnormal(NAN)         =%d\n", isnormal(NAN));
    printf("isnormal(INFINITY)    =%d\n", isnormal(INFINITY));
    printf("isnormal(0.0)         =%d\n", isnormal(0.0));
    printf("isnormal(DBL_MIN/2.0) =%d\n", isnormal(DBL_MIN / 2.0));
    printf("isnormal(1.0)         =%d\n", isnormal(1.0));
}