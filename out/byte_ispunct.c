//https://en.cppreference.com/w/c/byte/ispunct.html

#include <stdio.h>
#include <ctype.h>
#include <locale.h>

int main(void)
{
    unsigned char c = '\xd7'; // the character  (multiplication sign) in ISO-8859-1
    printf("In the default C locale, \\xd7 is%spunctuation\n",
           ispunct(c) ? "" : "not " );
    setlocale(LC_ALL, "en_GB.iso88591");
    printf("In ISO-8859-1 locale, \\xd7 is%spunctuation\n",
           ispunct(c) ? "" : "not " );
}