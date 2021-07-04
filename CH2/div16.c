
#include <stdio.h>

int div16(int x) {

    int bias = - (((x >> 31) << 4) - (x >> 31));
    return (x + bias) >> 4;
}

int main(void) {

    printf("%d\n", div16(31));
    printf("%d\n", div16(32));
    printf("%d\n", div16(36));
    printf("%d\n", div16(47));
    printf("%d\n", div16(-1));
    printf("%d\n", div16(-15));
    printf("%d\n", div16(-16));
    printf("%d\n", div16(-17));
}