
#include <stdio.h>

int uadd_ok(unsigned short x, unsigned short y) {
    unsigned short z = x + y;
    return z >= x;
}

int tadd_ok(short x, short y) {
    short z = x + y;
    return !((x > 0 && y > 0 && z < x) || (x < 0 && y < 0 && z > x)); 
}

int main(void) {

    /* Test unsigned addition */
    printf("%i\n", uadd_ok(12345u, 12345u));
    printf("%i\n", uadd_ok(12345, 12345));
    printf("%i\n", uadd_ok(54321u, 12345u));

    /* Test signed addtion */
    printf("%i\n", tadd_ok(12345, 12345));
    printf("%i\n", tadd_ok(12345, -23456));
    printf("%i\n", tadd_ok(23456, 23456));
    printf("%i\n", tadd_ok(-23456, -23456));

    return 0;
}