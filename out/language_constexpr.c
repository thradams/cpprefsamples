//https://en.cppreference.com/w/c/language/constexpr.html

#include <fenv.h>
#include <stdio.h>

int main(void)
{
    constexpr float f = 23.0f;
    constexpr float g = 33.0f;
    fesetround(FE_TOWARDZERO);
    constexpr float h = f / g; // is not affected by fesetround() above
    printf("%f\n", h);
}