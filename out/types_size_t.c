//https://en.cppreference.com/w/c/types/size_t.html

#include <stddef.h>
#include <stdint.h>
#include <stdio.h>

int main(void)
{
    const size_t N = 101;
    int numbers[N];
    size_t sum = 0;
    for (size_t ndx = 0; ndx < N; ++ndx)
        sum += numbers[ndx] = ndx;
    size_t size = sizeof numbers;
    printf("sum =%zu\n", sum);
    printf("size =%zu\n", size);
    printf("SIZE_MAX =%zu\n", SIZE_MAX);
}