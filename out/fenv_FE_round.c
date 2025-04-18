//https://en.cppreference.com/w/c/fenv/FE_round.html

#include <fenv.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

// #pragma STDC FENV_ACCESS ON

int main()
{
    fesetround(FE_DOWNWARD);
    puts("rounding down: ");
    printf("           pi =%.22f\n", acosf(-1));
    printf("strtof(\"1.1\") =%.22f\n", strtof("1.1", NULL));
    printf("    rint(2.1) =%.22f\n\n", rintf(2.1));
    fesetround(FE_UPWARD);
    puts("rounding up: ");
    printf("           pi =%.22f\n", acosf(-1));
    printf("strtof(\"1.1\") =%.22f\n", strtof("1.1", NULL));
    printf("    rint(2.1) =%.22f\n", rintf(2.1));
}