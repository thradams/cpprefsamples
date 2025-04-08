//https://en.cppreference.com/w/c/language/array.html
" class="mw-geshi" style="text-align: left;">int n = 5, m = 5;
size_t sz = sizeof(int (*[n++])[m++]); // n is incremented, m may or may not be incremented