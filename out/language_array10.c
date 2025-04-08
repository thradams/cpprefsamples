//https://en.cppreference.com/w/c/language/array.html
" class="mw-geshi" style="text-align: left;">void foo(size_t x, int a[*]);
void foo(size_t x, int a[x])
{
    printf("%zu\n", sizeof a); // same as sizeof(int*)
}