//https://en.cppreference.com/w/c//types.html

#include <stdalign.h>
#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    printf("%d%d%d\n", true && false, true || false, !false);
    printf("%d%d\n", true ^ true, true + true);
    printf("%zu\n", alignof(short));
}