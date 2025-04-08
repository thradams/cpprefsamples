//https://en.cppreference.com/w/c/wide/wcsncat.html

#include <wchar.h> 
#include <stdio.h>
#include <locale.h>

int main(void) 
{
    wchar_t str[50] = L", .";
    wcsncat(str, L" ", 1);
    wcsncat(str, L"  .", 8); // only append the first 8 wide chars
    setlocale(LC_ALL, "en_US.utf8");
    printf("%ls", str);
}