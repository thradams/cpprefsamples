//https://en.cppreference.com/w/c/wide/wcsstr.html

#include <stdio.h>
#include <locale.h>
#include <wchar.h>

int main(void)
{
    setlocale(LC_ALL, "ru_RU.UTF-8");

    wchar_t str[5][64] = {
        L",    ''.",
        L",    .",
        L" .",
        L" .",
        L" ."
    };

    for (size_t i = 0; i < 5; ++i) {
        if (wcsstr(str[i], L"")) {
            wprintf(L"%ls\n", str[i]);
        }
    }
}