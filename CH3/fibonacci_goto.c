
#include <stdio.h>

int fibonnaci(int n) {
    if (n < 1) {
        return -1;
    }

    if (n == 1 || n == 2) {
        return 1;
    }

    while (n > 2) {
        return fibonnaci(n - 1) + fibonnaci(n - 2);
    }

    return 0;
}

int fibonnaci_itr(int n) {

    int result;
    
    if (n < 1) {
        return -1;
    }

    int f1, f2;
    f1 = f2 = 1;
    if (n == 1 || n == 2) {
        return f1;
    }
    
    while (n > 2) {
        result = f1 + f2;
        f1 = f2;
        f2 = result;
        n -= 1;
    }
    return result;
}

int fibonnaci_goto(int n) {

    int result;
    int f1, f2;
    f1 = f2 = 1;
    
    if (n <= 2) {
        goto special;
    }

    loop:
        result = f1 + f2;
        f1 = f2;
        f2 = result;
        n -= 1;
        if (n > 2) {
            goto loop;
        }
        return result;

    special:
        if (n < 1) {
            return -1;
        } else {
            return f1;
        }
}

int main(void) {
    printf("%i\n", fibonnaci(0));
    printf("%i\n", fibonnaci(10));
    printf("%i\n", fibonnaci_itr(10));
    printf("%i\n", fibonnaci_goto(10));
    return 0;
}