// Online C compiler to run C program online
#include <stdio.h>

int main() {
    unsigned char x = 10;
    unsigned char y = 4;
    printf("X: %d\nY: %d\n", x, y);
    printf("X & Y : %d\n", x&y);
    printf("X | Y : %d\n", x|y);
    printf("X ^ Y : %d\n", x^y);
    x = ~(x | y);
    // printf("%d", sizeof(x));
    printf("~ (X|Y) : %d\n", x);

    /*
    float a = 2;
    printf("%f", ~a);   // bitwise_operators.c:16:18: error: wrong type argument to bit-complement
    */
}