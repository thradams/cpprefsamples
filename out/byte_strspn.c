//https://en.cppreference.com/w/c/byte/strspn.html

#include <stdio.h>
#include <string.h>

int main(void)
{
    const char* string = "abcde312$#@";
    const char* low_alpha = "qwertyuiopasdfghjklzxcvbnm";

    size_t spnsz = strspn(string, low_alpha);
    printf("After skipping initial lowercase letters from '%s'\n"
           "The remainder is '%s'\n", string, string + spnsz);
}