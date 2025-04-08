//https://en.cppreference.com/w/c/language/struct_initialization.html
" class="mw-geshi" style="text-align: left;">int n = 1;
struct {int x,y;} p = {n++, n++}; // unspecified, but well-defined behavior:
                                  // n is incremented twice in arbitrary order
                                  // p equal {1,2} and {2,1} are both valid