//https://en.cppreference.com/w/c/language/operator_member_access.html
" class="mw-geshi" style="text-align: left;">int f(char c) { return c;}
int main(void)
{
   int n = 1;
   int *p = &n; // address of object n
   int (*fp)(char) = &f; // address of function f
   int a[3] = {1,2,3};
   int *beg=a, *end=&a[3]; // same as end = a+3
}