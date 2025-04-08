//https://en.cppreference.com/w/c/math/copysign.html

#include <math.h>
#include <stdio.h>

int main(void)
{
    printf("copysign(1.0,+2.0)      =%+.1f\n", copysign(1.0,+2.0));
    printf("copysign(1.0,-2.0)      =%+.1f\n", copysign(1.0,-2.0));
    printf("copysign(INFINITY,-2.0) =%f\n",    copysign(INFINITY,-2.0));
    printf("copysign(NAN,-2.0)      =%f\n",    copysign(NAN,-2.0));
}