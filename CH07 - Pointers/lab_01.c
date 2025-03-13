/*
Manipulating integer value using pointers
Expected output:
    x before change: 10
    x after change: 20
*/

#include <stdio.h>

void main() {
    int x = 10;
    printf("x before change: %d\n", x);

    int* pX = &x;
    *pX = 20;
    printf("x after change: %d", x);
}