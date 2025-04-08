//https://en.cppreference.com/w/c/math/erfc.html

#include <math.h>
#include <stdio.h>

double normalCDF(double x) // Phi(-, x) aka N(x)
{
    return erfc(-x / sqrt(2)) / 2;
}

int main(void)
{
    puts("normal cumulative distribution function:");
    for (double n = 0; n < 1; n += 0.1)
        printf("normalCDF(%.2f)%5.2f%%\n", n, 100 * normalCDF(n));

    printf("special values:\n"
           "erfc(-Inf) =%f\n"
           "erfc(Inf) =%f\n",
           erfc(-INFINITY),
           erfc(INFINITY));
}