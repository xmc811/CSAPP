
#include <stdio.h>

typedef unsigned char *byte_ptr;

void print_byte(byte_ptr bp, size_t len) {
    for (int i = 0; i < len; i++) {
        printf("%.2x ", *(bp + i));     /* dereferencing representations */
    }
    printf("\n");
}

int main(void) {

    int a = 255;
    float b = 1234.0;
    long c = 255;
    int x = 0x12345678;

    print_byte((byte_ptr) &a, sizeof(a));   /* pointer casting */
    print_byte((byte_ptr) &b, sizeof(b));
    print_byte((byte_ptr) &c, sizeof(c));
    print_byte((byte_ptr) &x, 1);
    print_byte((byte_ptr) &x, 2);
    print_byte((byte_ptr) &x, 3);
}