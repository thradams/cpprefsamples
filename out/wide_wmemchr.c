//https://en.cppreference.com/w/c/wide/wmemchr.html

#include <locale.h>
#include <stdio.h>
#include <wchar.h>

int main(void)
{
    wchar_t str[] = L"\0";
    size_t sz = sizeof str / sizeof *str;

    wchar_t target = L'';
    wchar_t* result = wmemchr(str, target, sz);

    if (result)
    {
        setlocale(LC_ALL, "en_US.utf8");
        printf("Found '%lc' at position%td\n",target, result - str);
    }
}