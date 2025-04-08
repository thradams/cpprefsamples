//https://en.cppreference.com/w/c/multibyte/char8_t.html

#include <stdio.h>
#include <uchar.h>

int main(void)
{
    char8_t str[] = u8"z"; // or "z\u00df\u6c34\U0001f34c"
    size_t str_sz = sizeof str; // sizeof *str == 1 by definition
    printf("%zu UTF-8 code units: [ ", str_sz);
    for (size_t n = 0; n < str_sz; ++n)
        printf("%02X ", str[n]);
    printf("]\n");
}