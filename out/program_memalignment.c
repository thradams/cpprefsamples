//https://en.cppreference.com/w/c/program/memalignment.html

#include <stdio.h>
#include <stdlib.h>

int main()
{
    alignas(128) int i = 0;
    printf("%zu\n%zu\n", memalignment(nullptr), memalignment(&i));
}