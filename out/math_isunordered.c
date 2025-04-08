//https://en.cppreference.com/w/c/math/isunordered.html

#include <math.h>
#include <stdio.h>

int main(void)
{
    printf("isunordered(NAN,1.0) =%d\n", isunordered(NAN, 1.0));
    printf("isunordered(1.0,NAN) =%d\n", isunordered(1.0, NAN));
    printf("isunordered(NAN,NAN) =%d\n", isunordered(NAN, NAN));
    printf("isunordered(1.0,0.0) =%d\n", isunordered(1.0, 0.0));

    return 0;
}