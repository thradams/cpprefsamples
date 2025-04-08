//https://en.cppreference.com/w/c/wide/wcscspn.html

#include <locale.h>
#include <wchar.h>

int main(void)
{
    wchar_t dest[] = L"  ";
    /*                         */
    const wchar_t *src = L",";

    const size_t len = wcscspn(dest, src);
    dest[len] = L'\0'; /* terminates the segment to print it out */

    setlocale(LC_ALL, "en_US.utf8");
    wprintf(L"The length of maximum initial segment is%td.\n"
            L"The segment is \"%ls\".\n", len, dest);
}