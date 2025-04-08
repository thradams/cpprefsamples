//https://en.cppreference.com/w/c/wide/wcscpy.html

#include <locale.h>
#include <stdio.h>
#include <wchar.h>

int main(void)
{
    wchar_t* src = L" means dog";
//  src[0] = L''; // this would be undefined behavior
    wchar_t dst[wcslen(src) + 1]; // +1 for the null terminator
    wcscpy(dst, src);
    dst[0] = L''; // OK

    setlocale(LC_ALL, "en_US.utf8");
    printf("src =%ls\ndst =%ls\n", src, dst);
}