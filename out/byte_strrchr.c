//https://en.cppreference.com/w/c/byte/strrchr.html

#include <stdio.h>
#include <string.h>

int main(void)
{
    char szSomeFileName[] = "foo/bar/foobar.txt";
    char* pLastSlash = strrchr(szSomeFileName, '/');
    char* pszBaseName = pLastSlash ? pLastSlash + 1 : szSomeFileName;
    printf("Base Name:%s", pszBaseName);
}