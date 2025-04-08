//https://en.cppreference.com/w/c/language/array.html
" class="mw-geshi" style="text-align: left;">typedef int A[2];
// _Atomic A a0 = {0};    // Error
// _Atomic(A) a1 = {0};   // Error
_Atomic int a2[2] = {0};  // OK
_Atomic(int) a3[2] = {0}; // OK