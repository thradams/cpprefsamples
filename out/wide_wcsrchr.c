//https://en.cppreference.com/w/c/wide/wcsrchr.html

#include <locale.h>
#include <stdio.h>
#include <wchar.h>

int main(void)
{
    wchar_t arr[] = L"  ";
    wchar_t *cat = wcsrchr(arr, L'');
    wchar_t *dog = wcsrchr(arr, L'');

    setlocale(LC_ALL, "en_US.utf8");

    cat ? printf("The character  found at position%td\n", cat - arr)
        : puts("The character  not found");

    dog ? printf("The character  found at position%td\n", dog - arr)
        : puts("The character  not found");
}