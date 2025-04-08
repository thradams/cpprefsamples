//https://en.cppreference.com/w/c/language/array.html
" class="mw-geshi" style="text-align: left;">int a[3] = {1,2,3}, b[3] = {4,5,6};
int (*p)[3] = &a; // okay, address of a can be taken
// a = b;            // error, a is an array
struct { int c[3]; } s1, s2 = {3,4,5};
s1 = s2; // okay: can assign structs holding array members