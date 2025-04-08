//https://en.cppreference.com/w/c/math/asinh.html

#include <math.h>
#include <stdio.h>

int main(void)
{
    printf("asinh(1) =%f\nasinh(-1) =%f\n", asinh(1), asinh(-1));
    // special values
    printf("asinh(+0) =%f\nasinh(-0) =%f\n", asinh(0.0), asinh(-0.0));
}