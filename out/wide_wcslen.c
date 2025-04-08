//https://en.cppreference.com/w/c/wide/wcslen.html

#include <wchar.h>
#include <stdio.h>

int main(void)
{
    wchar_t str[] = L"How many wide characters does this string contain?";

    printf("without null character:%zu\n", wcslen(str));
    printf("with null character:%zu\n", sizeof str / sizeof *str);
}