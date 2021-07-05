
#include <stdio.h>

/* 
Write C code equivalent to the assemnly code below:

decode1:
movq (%rdi), %r8
movq (%rsi), %rcx
movq (%rdx), %rax
movq %r8, (%rsi)
movq %rcx, (%rdx)
movq %rax, (%rdi)
ret

*/

void decode1(long *xp, long *yp, long *zp) {

    /* 
    x -> y
    y -> z
    z -> x
    */

    long x = *xp;
    long y = *yp;
    long z = *zp;

    *yp = x;
    *zp = y;
    *xp = z;

}