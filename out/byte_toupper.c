//https://en.cppreference.com/w/c/byte/toupper.html

#include <ctype.h>
#include <limits.h>
#include <locale.h>
#include <stdio.h>

int main(void)
{
    // in the default locale:
    for (unsigned char l = 0, u; l != UCHAR_MAX; ++l)
        if ((u = toupper(l)) != l)
            printf("%c%c ", l, u);
    printf("\n\n");

    unsigned char c = '\xb8'; // the character  in ISO-8859-15
                              // but  (cedilla) in ISO-8859-1
    setlocale(LC_ALL, "en_US.iso88591");
    printf("in iso8859-1, toupper('0x%x') gives 0x%x\n", c, toupper(c));
    setlocale(LC_ALL, "en_US.iso885915");
    printf("in iso8859-15, toupper('0x%x') gives 0x%x\n", c, toupper(c));
}