//https://en.cppreference.com/w/c/language/operator_assignment.html
" class="mw-geshi" style="text-align: left;">T1* addr = &lhs;
T2 val = rhs;
T1 old = *addr;
T1 new;
do { new = old @ val } while (!atomic_compare_exchange_strong(addr, &old, new);