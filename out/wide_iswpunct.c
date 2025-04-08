//https://en.cppreference.com/w/c/wide/iswpunct.html

#include <stdio.h>
#include <wchar.h>
#include <wctype.h>
#include <locale.h>

int main(void)
{
    const wchar_t c = L'\u2051'; // Two asterisks ('')
    printf("in the default locale, iswpunct(%#x) =%d\n", c, !!iswpunct(c));
    setlocale(LC_ALL, "en_US.utf8");
    printf("in Unicode locale, iswpunct(%#x) =%d\n", c, !!iswpunct(c));
}