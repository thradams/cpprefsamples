//https://en.cppreference.com/w/c/wide/wcschr.html

#include <wchar.h>
#include <stdio.h>
#include <locale.h>

int main(void)
{
    wchar_t arr[] = L"  ";
    wchar_t *cat = wcschr(arr, L'');
    wchar_t *dog = wcschr(arr, L'');

    setlocale(LC_ALL, "en_US.utf8");
    if(cat)
        printf("The character  found at position%td\n", cat-arr);
    else
        puts("The character  not found");

    if(dog)
        printf("The character  found at position%td\n", dog-arr);
    else
        puts("The character  not found");
}