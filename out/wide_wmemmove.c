//https://en.cppreference.com/w/c/wide/wmemmove.html

#include <locale.h>
#include <stdio.h>
#include <wchar.h>

int main(void)
{
    setlocale(LC_ALL, "en_US.utf8");

    wchar_t str[] = L"";
    printf("%ls\n", str);
    wmemmove(str + 4, str + 3, 3); // copy from [] to []
    printf("%ls\n", str);
}