//https://en.cppreference.com/w/c/math/isgreater.html

#include <math.h>
#include <stdio.h>

int main(void)
{
    printf("isgreater(2.0,1.0)      =%d\n", isgreater(2.0, 1.0));
    printf("isgreater(1.0,2.0)      =%d\n", isgreater(1.0, 2.0));
    printf("isgreater(INFINITY,1.0) =%d\n", isgreater(INFINITY, 1.0));
    printf("isgreater(1.0,NAN)      =%d\n", isgreater(1.0, NAN));

    return 0;
}