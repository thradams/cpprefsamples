//https://en.cppreference.com/w/c/numeric/endian.html

#include <stdbit.h>
#include <stdio.h>

int main()
{
    switch(__STDC_ENDIAN_NATIVE__)
    {
        case __STDC_ENDIAN_LITTLE__:
            printf("__STDC_ENDIAN_LITTLE__\n");
            break;
        case __STDC_ENDIAN_BIG__:
            printf("__STDC_ENDIAN_BIG__\n");
            break;
        default:
            printf("mixed-endian\n");
    }
    return __STDC_ENDIAN_NATIVE__;
}