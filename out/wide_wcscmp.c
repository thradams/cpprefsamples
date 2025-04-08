//https://en.cppreference.com/w/c/wide/wcscmp.html

#include <locale.h>
#include <stdio.h>
#include <wchar.h>

void demo(const wchar_t* lhs, const wchar_t* rhs)
{
    int rc = wcscmp(lhs, rhs);
    const char *rel = rc < 0 ? "precedes" : rc > 0 ? "follows" : "equals";

    setlocale(LC_ALL, "en_US.utf8");
    printf("[%ls]%s [%ls]\n", lhs, rel, rhs);
}

int main(void)
{
    const wchar_t* string = L"";
    demo(string, L"");
    demo(string, L"");
    demo(string + 9, L"" + 6);
}