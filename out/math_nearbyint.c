//https://en.cppreference.com/w/c/math/nearbyint.html

#include <fenv.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
// #pragma STDC FENV_ACCESS ON
    fesetround(FE_TONEAREST);
    printf("rounding to nearest:\nnearbyint(+2.3) =%+.1f  ", nearbyint(2.3));
    printf("nearbyint(+2.5) =%+.1f  ", nearbyint(2.5));
    printf("nearbyint(+3.5) =%+.1f\n", nearbyint(3.5));
    printf("nearbyint(-2.3) =%+.1f  ", nearbyint(-2.3));
    printf("nearbyint(-2.5) =%+.1f  ", nearbyint(-2.5));
    printf("nearbyint(-3.5) =%+.1f\n", nearbyint(-3.5));

    fesetround(FE_DOWNWARD);
    printf("rounding down: \nnearbyint(+2.3) =%+.1f  ", nearbyint(2.3));
    printf("nearbyint(+2.5) =%+.1f  ", nearbyint(2.5));
    printf("nearbyint(+3.5) =%+.1f\n", nearbyint(3.5));
    printf("nearbyint(-2.3) =%+.1f  ", nearbyint(-2.3));
    printf("nearbyint(-2.5) =%+.1f  ", nearbyint(-2.5));
    printf("nearbyint(-3.5) =%+.1f\n", nearbyint(-3.5));

    printf("nearbyint(-0.0) =%+.1f\n", nearbyint(-0.0));
    printf("nearbyint(-Inf) =%+.1f\n", nearbyint(-INFINITY));
}