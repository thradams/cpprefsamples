//https://en.cppreference.com/w/c/language/array.html
" class="mw-geshi" style="text-align: left;">struct tag
{
    int z[n]; // Error: VLA struct member
    int (*y)[n]; // Error: VM struct member
};