//https://en.cppreference.com/w/c/math/fdim.html

#include <errno.h>
#include <fenv.h>
#include <math.h>
#include <stdio.h>
// #pragma STDC FENV_ACCESS ON

int main(void)
{
    printf("fdim(4, 1) =%f, fdim(1, 4)=%f\n", fdim(4,1), fdim(1,4));
    printf("fdim(4,-1) =%f, fdim(1,-4)=%f\n", fdim(4,-1), fdim(1,-4));
    //error handling
    errno = 0; feclearexcept(FE_ALL_EXCEPT);
    printf("fdim(1e308, -1e308) =%f\n", fdim(1e308, -1e308));
    if (errno == ERANGE)
        perror("    errno == ERANGE");
    if (fetestexcept(FE_OVERFLOW))
        puts("    FE_OVERFLOW raised");
}