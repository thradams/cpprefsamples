//https://en.cppreference.com/w/c/math/islessgreater.html

#include <math.h>
#include <stdio.h>

int main(void)
{
    printf("islessgreater(2.0,1.0)      =%d\n", islessgreater(2.0, 1.0));
    printf("islessgreater(1.0,2.0)      =%d\n", islessgreater(1.0, 2.0));
    printf("islessgreater(1.0,1.0)      =%d\n", islessgreater(1.0, 1.0));
    printf("islessgreater(INFINITY,1.0) =%d\n", islessgreater(INFINITY, 1.0));
    printf("islessgreater(1.0,NAN)      =%d\n", islessgreater(1.0, NAN));

    return 0;
}