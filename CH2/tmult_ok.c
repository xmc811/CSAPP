
#include <stdio.h>

/* using int64_t to test int32_t multiplication overflow */
int tmult_ok(int32_t x, int32_t y) {

    int64_t z = (int64_t) x * y;  /* casting is critical, otherwise computed as 32-bit value */
    z = z >> 31;
    return z == -1 || z == 0;
}

int main(void) {

    printf("%i\n", tmult_ok(5, 5));
    printf("%i\n", tmult_ok(5, -5));
    printf("%i\n", tmult_ok(-5, -5));
    printf("%i\n", tmult_ok(65536, 65536));
    printf("%i\n", tmult_ok(65536, -65536));
    printf("%i\n", tmult_ok(-65536, -65536));
}