//https://en.cppreference.com/w/c/math/round.html

#include <assert.h>
#include <fenv.h>
#include <float.h>
#include <limits.h>
#include <math.h>
#include <stdio.h>
// #pragma STDC FENV_ACCESS ON

double custom_round(double x)
{
    return signbit(x) ? ceil(x - 0.5) : floor(x + 0.5);
}

void test_custom_round()
{
    const double sample[] =
    {
        0.0, 2.3, 2.5 - DBL_EPSILON, 2.5, 2.5 + DBL_EPSILON, 2.7, INFINITY
    };
    for (size_t t = 0; t < sizeof sample / sizeof(double); ++t)
        assert(round(+sample[t]) == custom_round(+sample[t]) &&
               round(-sample[t]) == custom_round(-sample[t]));
}

int main(void)
{
    // round
    printf("round(+2.3) =%+.1f  ", round(2.3));
    printf("round(+2.5) =%+.1f  ", round(2.5));
    printf("round(+2.7) =%+.1f\n", round(2.7));
    printf("round(-2.3) =%+.1f  ", round(-2.3));
    printf("round(-2.5) =%+.1f  ", round(-2.5));
    printf("round(-2.7) =%+.1f\n", round(-2.7));

    printf("round(-0.0) =%+.1f\n", round(-0.0));
    printf("round(-Inf) =%+f\n",   round(-INFINITY));

    test_custom_round();

    // lround
    printf("lround(+2.3) =%+ld  ", lround(2.3));
    printf("lround(+2.5) =%+ld  ", lround(2.5));
    printf("lround(+2.7) =%+ld\n", lround(2.7));
    printf("lround(-2.3) =%+ld  ", lround(-2.3));
    printf("lround(-2.5) =%+ld  ", lround(-2.5));
    printf("lround(-2.7) =%+ld\n", lround(-2.7));

    printf("lround(-0.0) =%+ld\n", lround(-0.0));
    printf("lround(-Inf) =%+ld\n", lround(-INFINITY)); // FE_INVALID raised

    // error handling
    feclearexcept(FE_ALL_EXCEPT);
    printf("lround(LONG_MAX+1.5) =%ld\n", lround(LONG_MAX + 1.5));
    if (fetestexcept(FE_INVALID))
        puts("    FE_INVALID was raised");
}