//https://en.cppreference.com/w/c/multibyte/wcrtomb.html

#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <wchar.h>
#include <stdlib.h>

int main(void)
{
    setlocale(LC_ALL, "en_US.utf8");
    mbstate_t state;
    memset(&state, 0, sizeof state);
    wchar_t in[] = L"z"; // or "z\u00df\u6c34\U0001F34C"
    size_t in_sz = sizeof in / sizeof *in;

    printf("Processing%zu wchar_t units: [ ", in_sz);
    for(size_t n = 0; n < in_sz; ++n) printf("%#x ", (unsigned int)in[n]);
    puts("]");

    char out[MB_CUR_MAX * in_sz];
    char *p = out;
    for(size_t n = 0; n < in_sz; ++n) {
        int rc = wcrtomb(p, in[n], &state); 
        if(rc == -1) break;
        p += rc;
    }

    size_t out_sz = p - out;
    printf("into%zu UTF-8 code units: [ ", out_sz);
    for(size_t x = 0; x < out_sz; ++x) printf("%#x ", +(unsigned char)out[x]);
    puts("]");
}