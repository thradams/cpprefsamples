//https://en.cppreference.com/w/c/byte/isdigit.html

#include <ctype.h>
#include <limits.h>
#include <stdio.h>

int main(void)
{
    for (int ndx = 0; ndx <= UCHAR_MAX; ++ndx)
        if (isdigit(ndx))
            printf("%c", ndx);
    printf("\n");
}