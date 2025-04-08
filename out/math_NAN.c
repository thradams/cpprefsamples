//https://en.cppreference.com/w/c/math/NAN.html

#include <inttypes.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    const double f = NAN;
    uint64_t fn;
    memcpy(&fn, &f, sizeof f);
    printf("NAN:  %f%" PRIx64 "\n", f, fn);
}