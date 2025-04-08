//https://en.cppreference.com/w/c/language/array.html
" class="mw-geshi" style="text-align: left;">typedef int A[2][3];
const A a = {{4, 5, 6}, {7, 8, 9}}; // array of array of const int
int* pi = a[0]; // Error: a[0] has type const int*
void* unqual_ptr = a; // OK until C23; error since C23
// Notes: clang applies the rule in C++/C23 even in C89-C17 modes