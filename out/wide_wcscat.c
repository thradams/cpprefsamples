//https://en.cppreference.com/w/c/wide/wcscat.html

#include <wchar.h> 
#include <stdio.h>
#include <locale.h>

int main(void) 
{
    wchar_t str[50] = L", .";
    wcscat(str, L" ");
    wcscat(str, L"  .");
    setlocale(LC_ALL, "en_US.utf8");
    printf("%ls", str);
}