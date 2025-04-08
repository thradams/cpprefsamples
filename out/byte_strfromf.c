//https://en.cppreference.com/w/c/byte/strfromf.html

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char buffer[32];
    int written;
    const char* format[] = {"%a", "%A", "%e", "%E", "%f", "%F", "%g", "%G"};

    for (size_t fmt = 0; fmt != sizeof format / sizeof format[0]; ++fmt)
    {
        written = strfromf(buffer, sizeof buffer, format[fmt], 3.1415f);
        printf("strfromf(...%s ...) =%2i, buffer: \"%s\"\n",
               format[fmt], written, buffer);
    }
    puts("");

    for (size_t fmt = 0; fmt != sizeof format / sizeof format[0]; ++fmt)
    {
        written = strfromd(buffer, sizeof buffer, format[fmt], 3.1415);
        printf("strfromd(...%s ...) =%2i, buffer: \"%s\"\n",
               format[fmt], written, buffer);
    }
    puts("");

    for (size_t fmt = 0; fmt != sizeof format / sizeof format[0]; ++fmt)
    {
        written = strfroml(buffer, sizeof buffer, format[fmt], 3.1415);
        printf("strfroml(...%s ...) =%2i, buffer: \"%s\"\n",
               format[fmt], written, buffer);
    }
}