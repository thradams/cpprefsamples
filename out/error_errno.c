//https://en.cppreference.com/w/c/error/errno.html

#include <errno.h>
#include <math.h>
#include <stdio.h>

void show_errno(void)
{
    const char *err_info = "unknown error";
    switch (errno)
    {
        case EDOM:
            err_info = "domain error";
            break;
        case EILSEQ:
            err_info = "illegal sequence";
            break;
        case ERANGE:
            err_info = "pole or range error";
            break;
        case 0:
            err_info = "no error";
    }
    fputs(err_info, stdout);
    puts(" occurred");
}

int main(void)
{
    fputs("MATH_ERRNO is ", stdout);
    puts(math_errhandling & MATH_ERRNO ? "set" : "not set");

    errno = 0;
    (void)(1.0 / 0.0);
    show_errno();

    errno = 0;
    (void)acos(+1.1);
    show_errno();

    errno = 0;
    (void)log(0.0);
    show_errno();

    errno = 0;
    (void)sin(0.0);
    show_errno();
}