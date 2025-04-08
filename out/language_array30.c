//https://en.cppreference.com/w/c/language/array.html
" class="mw-geshi" style="text-align: left;">void fvla(int m, int C[m][m]) // OK: block scope/auto duration pointer to VLA
{
    typedef int VLA[m][m]; // OK: block scope VLA
    int D[m];              // OK: block scope/auto duration VLA
//  static int E[m]; // Error: static duration VLA
//  extern int F[m]; // Error: VLA with linkage
    int (*s)[m];     // OK: block scope/auto duration VM
    s = malloc(m * sizeof(int)); // OK: s points to VLA in allocated storage
//  extern int (*r)[m]; // Error: VM with linkage
    static int (*q)[m] = &B; // OK: block scope/static duration VM}
}