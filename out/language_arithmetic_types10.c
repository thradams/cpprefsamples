//https://en.cppreference.com/w/c/language/arithmetic_types.html
" class="mw-geshi" style="text-align: left;">float a[4] = {1, 2, 3, 4};
float complex z1, z2;
memcpy(&z1, a, sizeof z1); // z1 becomes 1.0 + 2.0i
memcpy(&z2, a+2, sizeof z2); // z2 becomes 3.0 + 4.0i