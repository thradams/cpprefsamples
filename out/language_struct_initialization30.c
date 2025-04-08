//https://en.cppreference.com/w/c/language/struct_initialization.html
" class="mw-geshi" style="text-align: left;">struct {int n;} s = {0}; // OK
struct {int n;} s = {}; // Error until C23: initializer-list cannot be empty
                        // OK since C23: s.n is initialized to 0
struct {} s = {}; // Error: struct cannot be empty