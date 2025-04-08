//https://en.cppreference.com/w/c/language/struct_initialization.html
" class="mw-geshi" style="text-align: left;">struct fred { char s[4]; int n; };
struct fred x[ ] = { { { "abc" }, 1 }, // inits x[0] to { {'a','b','c','\0'}, 1 }
                      [0].s[0] = 'q'   // changes x[0] to { {'q','b','c','\0'}, 1 }
                   };
struct fred y[ ] = { { { "abc" }, 1 }, // inits y[0] to { {'a','b','c','\0'}, 1 }
                     [0] = { // current object is now the entire y[0] object
                             .s[0] = 'q' 
                            } // replaces y[0] with { {'q','\0','\0','\0'}, 0 }
                    };