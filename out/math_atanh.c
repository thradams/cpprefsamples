//https://en.cppreference.com/w/c/math/atanh.html

#include <errno.h>
#include <fenv.h>
#include <float.h>
#include <math.h>
#include <stdio.h>
// #pragma STDC FENV_ACCESS ON

int main(void)
{
    printf("atanh(0) =%f\natanh(-0) =%f\n", atanh(0), atanh(-0.0));
    printf("atanh(0.9) =%f\n", atanh(0.9));

    // error handling
    errno = 0; feclearexcept(FE_ALL_EXCEPT);
    printf("atanh(-1) =%f\n", atanh(-1));
    if (errno == ERANGE)
        perror("    errno == ERANGE");
    if (fetestexcept(FE_DIVBYZERO))
        puts("    FE_DIVBYZERO raised");
}