//https://en.cppreference.com/w/c/math/isgreaterequal.html

#include <math.h>
#include <stdio.h>

int main(void)
{
    printf("isgreaterequal(2.0,1.0)      =%d\n", isgreaterequal(2.0, 1.0));
    printf("isgreaterequal(1.0,2.0)      =%d\n", isgreaterequal(1.0, 2.0));
    printf("isgreaterequal(1.0,1.0)      =%d\n", isgreaterequal(1.0, 1.0));
    printf("isgreaterequal(INFINITY,1.0) =%d\n", isgreaterequal(INFINITY, 1.0));
    printf("isgreaterequal(1.0,NAN)      =%d\n", isgreaterequal(1.0, NAN));

    return 0;
}