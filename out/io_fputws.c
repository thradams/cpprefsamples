//https://en.cppreference.com/w/c/io/fputws.html

#include <locale.h>
#include <stdio.h>
#include <wchar.h>

int main(void)
{
    setlocale(LC_ALL, "en_US.utf8");
    int rc = fputws(L"", stdout);

    if (rc == EOF)
       perror("fputws()"); // POSIX requires that errno is set
}