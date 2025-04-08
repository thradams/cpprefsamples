//https://en.cppreference.com/w/c/types/max_align_t.html

#include <inttypes.h>
#include <stdalign.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    size_t a = alignof(max_align_t);
    printf("Alignment of max_align_t is%zu (%#zx)\n", a, a);

    void *p = malloc(123);
    printf("The address obtained from malloc(123) is%#" PRIxPTR"\n",
            (uintptr_t)p);
    free(p);
}