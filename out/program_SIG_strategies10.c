//https://en.cppreference.com/w/c/program/SIG_strategies.html
" class="mw-geshi" style="text-align: left;">#include <signal.h>
#include <stdio.h>

int main(void)
{
    /* ignoring the signal */
    signal(SIGTERM, SIG_IGN);
    raise(SIGTERM);
    printf("Exit main()\n");
}