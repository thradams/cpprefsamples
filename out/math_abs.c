//https://en.cppreference.com/w/c/math/abs.html

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("abs(+3) =%d\n", abs(+3));
    printf("abs(-3) =%d\n", abs(-3));

//  printf("%+d\n", abs(INT_MIN)); // undefined behavior on 2's complement systems
}