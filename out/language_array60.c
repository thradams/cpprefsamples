//https://en.cppreference.com/w/c/language/array.html
" class="mw-geshi" style="text-align: left;">struct s { int n; double d[]; }; // s.d is a flexible array member
struct s *s1 = malloc(sizeof (struct s) + (sizeof (double) * 8)); // as if d was double d[8]