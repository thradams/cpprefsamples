//https://en.cppreference.com/w/c/byte/strstr.html

#include <stdio.h>
#include <string.h>

void find_str(char const* str, char const* substr)
{
    char const* pos = strstr(str, substr);
    if (pos)
        printf(
            "Found the string [%s] in [%s] at position%td\n",
            substr, str, pos - str
        );
    else
        printf(
            "The string [%s] was not found in [%s]\n",
            substr, str
        );
}

int main(void)
{
    char const* str = "one two three";
    find_str(str, "two");
    find_str(str, "");
    find_str(str, "nine");
    find_str(str, "n");

    return 0;
}